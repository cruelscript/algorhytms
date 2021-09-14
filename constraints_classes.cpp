#include <cassert>

// Compile only if T has function T* Clone() const

// I. Constraints class HasClone

template <typename T>
class HasClone
{
  static void Constraints()
  {
    T* (T::*test)() const = &T::Clone;
    test;
  }
public:
  HasClone() { void (*p)() = Constraints; }
};

template <typename T>
class C: HasClone<T>
{

};



// II. Classes with Clone() should be derived from Cloneable class

class Cloneable {};

template <typename D, typename B>
class IsDerivedFrom
{
  class No {};
  class Yes { No no[2]; };

  static Yes Test(B*);
  static No Test(...);

  static void Constraints(D* p)
  {
    B* pb = p;
    pb = p;
  }

public:
  enum
  { Is = sizeof(Test(static_cast<D*>(0))) == sizeof(Yes) };

  IsDerivedFrom() { void(*p)(D*) = Constraints; }
};

template <typename T>
class X
{
  bool ValidateRequirements() const
  {
    typedef IsDerivedFrom<T, Cloneable> Y; // Due to assert conflict with commas
    assert(Y::Is);
    return true;
  }
public:
  ~X()
  {
    assert(ValidateRequirements());
  }
};

// III. II and I will stop the program if class isn't cloneable
// but in reality we need to process the situation by specializing
// the template of class X, which will be implemented by PImpl
// Or it is possible to make traits class which will be specializing
// every derived class from Cloneable

int main()
{
  class A
  {
  public:
    A* Clone() const { return nullptr; }
  };
  class B {};

  C<A> test1; // OK
  C<B> test2; // Error

  class Derived: public Cloneable {};
  class NotDerived {};

  X<Derived> test3;    // OK
  X<NotDerived> test4; // Error
}