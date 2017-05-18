#pragma once
#include "iKontener.hh"
#include "iMierzalny.hh"
#include "Element.hh"

class Drzewo : public Kontener, public Mierzalny {

  Element* root;
  int rozmiar;
public:
  Drzewo();
  ~Drzewo();
  bool isExternal(Element*);
  void add(int);
  Element* get();
  int size();
  Element* find(int);
  void wykonajObliczenia(int, double&);
  void resetuj(int);
};
