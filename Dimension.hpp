#ifndef DIMENSION_HPP
#define DIMENSION_HPP

#include <iostream>

class Dimension {
public:
  int x;
  int y;

  Dimension();
  Dimension(int, int);
  bool equals(const Dimension&);

  friend std::ostream& operator<<(std::ostream&, const Dimension&);
};

#endif