#pragma once
#include "iKontener.hh"
#include "iMierzalny.hh"
#include "Element.hh"
#include "Lista.hh"
#define ROZMIAR 10

class TablicaAsocjacyjna : public Mierzalny, public Kontener {

  int rozmiar;
  Lista *tab[];

public:
  TablicaAsocjacyjna();
  ~TablicaAsocjacyjna();
  int haszuj(string);
  void add(int);
  void dodaj(Element*);
  Element* get();
  int size();
  Element* find(int);
  Element* znajdz(string);
  void wykonajObliczenia(int, double&);
  void resetuj(int);
  
};
