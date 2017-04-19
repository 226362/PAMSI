#include <iostream>
#include <cstdio>
#include "tablica.hh"
//#define TRYB 0  //powiekszanie o 1
#define TRYB 1  //powiekszanie x2

using namespace std;


Tablica::Tablica() {
  
   _rozmiar = 1;
  _wypelnienie = 0;
  _Tablica = new int[_rozmiar];
  _Tablica[0] = 0;
  
}



Tablica::~Tablica() {
  delete [] _Tablica;
}



Tablica::Tablica(int rozmiar) {
  _rozmiar = rozmiar;
  _Tablica = new int[_rozmiar];
  
  for (int i=0; i<rozmiar; i++) {
    _Tablica[i] = 0;
  }
  _wypelnienie = 0;
  
}


void Tablica::przypisz(int pozycja, int wartosc) {

  if(_wypelnienie==_rozmiar)
    powieksz(TRYB);  
  if(_wypelnienie<_rozmiar) {
    _Tablica[pozycja] = wartosc;
    _wypelnienie++;
  }
  
}

void Tablica::przypisz1(int pozycja, int wartosc) {
    _Tablica[pozycja] = wartosc; 
}


void Tablica::odczytaj(int pozycja, int &wartosc) {
  wartosc = _Tablica[pozycja];
}

int Tablica::wartosc(int pozycja) {
  return _Tablica[pozycja];
}

void Tablica::pokaz_rozmiar(int &rozmiar) {
  rozmiar = _rozmiar;
}

void Tablica::powieksz(int tryb) {

  if(tryb) {
    int* bufor = new int[2*_rozmiar];

    for(int i=0; i<_rozmiar; i++) {
      bufor[i] = _Tablica[i];
    }
    
    _rozmiar = 2*_rozmiar;
    delete [] _Tablica;
    _Tablica = &bufor[0];
  }

  else {
    int* bufor = new int[_rozmiar +1];

    for (int i=0; i<_rozmiar; i++) {
      bufor[i] = _Tablica[i];
    }
    
    _rozmiar++;
    delete [] _Tablica;
    _Tablica = &bufor[0];
  }
   

}

    
  
