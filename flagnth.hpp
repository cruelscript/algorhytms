#ifndef COUNTEDPTR_FLAGNTH_HPP
#define COUNTEDPTR_FLAGNTH_HPP

#include "counted_ptr.hpp"

class FlagNthImpl
{
public:
  FlagNthImpl(size_t nn):
    i(0),
    n(nn)
  {}
  size_t i;
  const size_t n;
};

class FlagNth // Functor returning true while have been called nth times
{
public:
  FlagNth(size_t n):
    pimpl_(new FlagNthImpl(n))
  {}

  template <typename T>
  bool operator()(const T&)
  {
    return ++(pimpl_->i) == pimpl_->n;
  }
private:
  CountedPtr<FlagNthImpl> pimpl_;
};

#endif //COUNTEDPTR_FLAGNTH_HPP
