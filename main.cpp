#include "Cell.hpp"
#include "Ground.hpp"

int main() {
  Cell *cell = new Ground();
  cell->setPosition(Dimension(3, 4));
  cell->setSprite("=");
  cell->onEnter();
  cell->show();
  std::cout << *cell << std::endl;

  Cell *ground = cell->clone();
  ground->onEnter();
  ground->show();
  std::cout << *ground << std::endl;
}