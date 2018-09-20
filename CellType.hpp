#ifndef CELLTYPE_HPP
#define CELLTYPE_HPP

#include <iostream>

enum CellType {
  NONE,
  GROUND,
  WATER,
  SAND
};

std::string toSprite(CellType);
std::string toName(CellType);



#endif