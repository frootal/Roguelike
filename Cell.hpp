#ifndef CELL_HPP
#define CELL_HPP

#include <iostream>
#include "Enterable.hpp"
#include "Showable.hpp"
#include "Dimension.hpp"
#include "CellType.hpp"

class Cell: public Enterable, public Showable {
public:
  Cell();
  Cell(const Cell&);
  virtual ~Cell();

  virtual Cell* clone() const = 0;

  int getId() const;
  Dimension getPosition() const;
  std::string getSprite() const;
  virtual CellType getCellType() const;

  void setPosition(Dimension);
  void setSprite(std::string);

  friend std::ostream& operator<<(std::ostream&, const Cell&);

protected:
  int id;
  Dimension position;
  std::string sprite;

private:
  static int counter;
};

#endif