#ifndef SYMULACJA_HH
#define SYMULACJA_HH

#include <iostream>
#include "RuchDane.hh"
#include "ruchy.hh"
#include "Pojemnik.hh"
using namespace std;

/*!
 *\file
 *\brief Implementacja funkcji symulujacych ruch przeciwnika w Warcabach
 */

void PrzestawCzarny(ruchy& plansza);
int Symuluj(ruchy& plansza, int& ID, string& strona,int& flaga,pozycja& miejsce);
int SymulujStandard(ruchy& plansza,int& ID,string& strona,int& flaga,pozycja& miejsce);
int RuszCzarne(ruchy& plansza, int obecnagl, int zysk, int id, string& strona);
int RuszBiale(ruchy& plansza, int obecnagl, int zysk, int id,string& strona);
int RuszKrolowaCzarna(ruchy& plansza, int obecnagl, int zysk, int id, pozycja& miejsce);
int RuszKrolowaBiala(ruchy& plansza, int obecnagl, int zysk, int id,pozycja& miejsce);
void PodwojneBicie(ruchy& plansza,int id,char kolor,int& zysk);
bool CzyJestemKrolowa(ruchy& plansza,int id, char kolor);

#endif
