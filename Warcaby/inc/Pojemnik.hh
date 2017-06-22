#ifndef POJEMNIK_HH
#define POJEMNIK_HH

#include <iostream>
#include <queue>
#include "plansza.hh"
using namespace std;

/*!
 *\file
 *\brief Implementacja pojemnika przechowujace wszystkie dane potrzebne do
 *ruchu krolowka
 */

class Pojemnik{
  int zysk=0;
  int id=0;
  pozycja miejsce;

public:
  int& Zysk(){return zysk;};
  int& Id(){return id;};
  pozycja& Miejsce(){return miejsce;};

};


#endif
