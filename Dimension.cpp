#include "Dimension.hpp"

Dimension::Dimension() {
  this->x = 0;
  this->y = 0;
}

Dimension::Dimension(int x, int y) {
  this->x = x;
  this->y = y;
}

bool Dimension::equals(const Dimension& dim) {
  return this->x == dim.x && this->y == dim.y;
}

std::ostream& operator<<(std::ostream& os, const Dimension& dim) {
  os << "(" << dim.x << ", " << dim.y << ")";
  return os;
}