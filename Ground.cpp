#include "Ground.hpp"

Ground* Ground::clone() const {
  return new Ground(*this);
}

CellType Ground::getCellType() const {
  return GROUND;
}

void Ground::onEnter() {
  std::cout << "Entered to ground at " << getPosition()
  << std::endl;
}

void Ground::show() const {
  std::cout << getSprite();
}

bool Ground::canEnter() {
  return true;
}