#pragma once
#include "iKontener.hh"
#include "iMierzalny.hh"
#include "Element.hh"

class Drzewo : public Kontener, public Mierzalny {

  Element straznik;
  Element* root;
  int rozmiar;
public:
  Drzewo();
  ~Drzewo();
  void relase(Element*);
  void rotLeft(Element*);
  void rotRight(Element*);
  void add(int);
  Element* get();
  int size();
  Element* find(int);
  void wykonajObliczenia(int, double&, int);
  void resetuj(int);
};
