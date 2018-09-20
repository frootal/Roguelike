#ifndef GROUND_HPP
#define GROUND_HPP

#include "Cell.hpp"

class Ground : public Cell {
public: 
  Ground() : Cell() {
    this->sprite = toSprite(GROUND);
  }
  
  Ground* clone() const override;

  CellType getCellType() const override;

  void onEnter() override;
  bool canEnter() override;

  void show() const override;
};

#endif