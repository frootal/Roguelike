#include "CellType.hpp"

std::string toSprite(CellType cellType) {
  switch(cellType) {
    case NONE:
      return "?";
    case GROUND:
      return "-";
    case WATER:
      return "~";
    case SAND:
      return ".";
  }

  throw(__FUNCTION__);
}

std::string toName(CellType cellType) {
  switch(cellType) {
    case NONE:
      return "NONE";
    case GROUND:
      return "GROUND";
    case WATER:
      return "WATER";
    case SAND:
      return "SAND";
  }

  throw(__FUNCTION__);
}