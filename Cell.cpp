#include "Cell.hpp"
int Cell::counter = 0;

Cell::Cell() {
  this->id = counter++;
  this->position = Dimension();
  this->sprite = toSprite(getCellType());
}

Cell::Cell(const Cell& cell) {
  this->id = counter++;
  this->position = cell.position;
  this->sprite = cell.sprite;
} 

Cell::~Cell() {
  std::cout << "Destroyed a Cell" << std::endl;
}

int Cell::getId() const {
  return this->id;
}

CellType Cell::getCellType() const {
  return NONE;
}

Dimension Cell::getPosition() const {
  return this->position;
}

std::string Cell::getSprite() const {
  return this->sprite;
}

void Cell::setPosition(Dimension position) {
  this->position = position;
}

void Cell::setSprite(std::string sprite) {
  this->sprite = sprite;
}

std::ostream& operator<<(std::ostream& os, const Cell& cell) {
  os << "[" << cell.id << "| " << toName(cell.getCellType());
  os << ", " << cell.position << ", ";
  os << cell.sprite << "]";
  return os;
}