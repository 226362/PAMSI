#pragma once
#include "iKontener.hh"
#include "iMierzalny.hh"
#include "Element.hh"

class Lista : public Kontener, public Mierzalny {

  Element* head;
  Element* tail;
  int rozmiar;
public:
  Lista();
  ~Lista();
  void add(int);
  Element* get();
  int size();
  Element* find(int);
  void wykonajObliczenia(int, double&);
  void resetuj(int);
};

