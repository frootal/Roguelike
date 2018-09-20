#ifndef SHOWABLE_HPP
#define SHOWABLE_HPP

#include <iostream>

class Showable {
public:
  virtual void show() const = 0;
  virtual ~Showable();
};
#endif