#ifndef COUNTED_PTR_HPP
#define COUNTED_PTR_HPP

#include <cstddef>

template <typename T>
class CountedPtr
{
private:
  class Impl
  {
  public:
    Impl(T* pp):
      p(pp),
      refs(1)
    {}
    ~Impl() { delete p; }
    T* p;
    size_t refs;
  };
  Impl* impl_;
public:
  explicit CountedPtr(T* p):
    impl_(new Impl(p))
  {}
  ~CountedPtr() { Decrement(); }
  CountedPtr(const CountedPtr &other):
    impl_(other.impl_)
  {
    Increment();
  }

  CountedPtr& operator=(const CountedPtr& other)
  {
    if(impl_ != other.impl_)
    {
      Decrement();
      impl_ = other.impl_;
      Increment();
    }
    return *this;
  }

  T* operator->() const
  {
    return impl_->p;
  }

  T& operator*() const
  {
    return *(impl_->p);
  }
private:
  void Decrement()
  {
    if(--(impl_->refs) == 0)
    {
      delete impl_;
    }
  }
  void Increment()
  {
    ++(impl_->refs);
  }
};

#endif //COUNTED_PTR_HPP
