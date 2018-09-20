#ifndef ENTERABLE_HPP
#define ENTERABLE_HPP

#include <iostream>
#include "Showable.hpp"

class Enterable {
public:
  virtual void onEnter() = 0;
  virtual bool canEnter() = 0;

  virtual ~Enterable();
};

#endif