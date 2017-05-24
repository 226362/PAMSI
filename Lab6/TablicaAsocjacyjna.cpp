#include "TablicaAsocjacyjna.hh"
#include "stoper.hh"
#include <cstdlib>
#include <cstring>
#define ROZMIAR 10


TablicaAsocjacyjna::TablicaAsocjacyjna() {
  rozmiar = ROZMIAR;
  for(int i=0; i<rozmiar; i++)
    tab[i] = new Lista();
}


TablicaAsocjacyjna::~TablicaAsocjacyjna() {
  for(int i=0; i<rozmiar; i++) {
    if(tab[rozmiar]) {
      Lista* temp = tab[rozmiar];
      delete [] temp;
    }
  }
}


int TablicaAsocjacyjna::haszuj(string slowo) {
  int kod = 0;
  for(unsigned int i=0; i<slowo.length(); i++) {
    kod += (int) slowo[i] % ROZMIAR;
  }
  return kod;
}


void TablicaAsocjacyjna::add(int kod) {

}

void TablicaAsocjacyjna::dodaj(Element* nowy) {
  int kod = haszuj(nowy->getKey());
  if(!tab[kod])
    tab[kod] = new Lista();
  tab[kod]->dodaj(nowy);
}

  


Element* TablicaAsocjacyjna::get() {
  return NULL;
}


int TablicaAsocjacyjna::size() {
  return rozmiar;
}


Element* TablicaAsocjacyjna::find(int kod) {
  return NULL;
}

Element* TablicaAsocjacyjna::znajdz(string szukana) {
  int kod = haszuj(szukana);
  Element* znaleziona = tab[kod]->znajdz(szukana);
  return znaleziona;
}
  

void TablicaAsocjacyjna::wykonajObliczenia(int rozmiarProblemu,
					   double& wynik) {
  Stoper stoper;
  string szukana;
  srand(time(NULL));
  char znaki[] = "ABCDEFGHIJKLMNOPQRTSUWXYZabcdefghijklmnopqrstuwxyz";
  int iloscZnakow = sizeof(znaki)-1;
  for(int i=0; i<rozmiarProblemu; i++) {
    int dlugosc = (rand()%20)+1;
    string slowo;
    int wartosc = (rand()%10000)+1;
    for(int j=0; j<dlugosc; j++)
      slowo += znaki[rand()%iloscZnakow];
    if(i==1)
      szukana = slowo;
    Element* nowy = new Element();
    nowy->setKey(slowo);
    nowy->setValue(wartosc);
    this->dodaj(nowy);
    
  }
  stoper.start();
  Element* temp = this->znajdz(szukana);
  if(temp);
  stoper.stop();
  wynik = stoper.czas();
}

void TablicaAsocjacyjna::resetuj(int CosTam) {
  for(int i=0; i<rozmiar; i++) {
    if(tab[rozmiar]) {
      Lista* temp = tab[rozmiar];
      delete [] temp;
    }
  }
}
