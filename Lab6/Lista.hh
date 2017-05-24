#pragma once
#include "iKontener.hh"
#include "iMierzalny.hh"
#include "Element.hh"
#include <string>

using namespace std;

class Lista : public Kontener, public Mierzalny {

  Element* head;
  Element* tail;
  int rozmiar;
public:
  Lista();
  ~Lista();
  void add(int);
  void dodaj(Element*);
  Element* get();
  int size();
  Element* find(int);
  Element* znajdz(string);
  void wykonajObliczenia(int, double&);
  void resetuj(int);
};

