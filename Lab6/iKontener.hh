#pragma once
#include "Element.hh"

class Kontener {

public:
  virtual void add(int) = 0;
  virtual Element* get() = 0;
  virtual int size() = 0;
  virtual Element* find(int) = 0;
};
