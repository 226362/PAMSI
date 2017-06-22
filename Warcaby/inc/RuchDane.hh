#ifndef RUCHDANE_HH
#define RUCHDANE_HH

#include <iostream>
#include <queue>
using namespace std;

/*!
 *\file
 *\brief Implementacja pojemnika przechowujace wszystkie dane potrzebne do
 *ruchu pionkiem
 */

class RuchDane{
  int zysk=0;
  int id=0;
  string strona="";

public:
  int& WezZysk(){return zysk;};
  int& WezId(){return id;};
  string& WezStrona(){return strona;};

};


#endif
