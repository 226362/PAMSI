#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include "tablica.hh"
#include "stoper.hh"
#define ROZMIAR 1000
#define MAX 1000000

using namespace std;


int podziel(Tablica &tablica, int poczatek, int koniec) {
  int bufor, pivot;
  //pivot = poczatek;
  pivot = koniec-1;
  //pivot = (poczatek+koniec)/2;
  int temp = tablica.wartosc(pivot);
  int i = poczatek;
  int j = koniec;
  while(1) {
    while (tablica.wartosc(j)>temp)
      j--;
    while (tablica.wartosc(i)<temp)
      i++;
    if(i<j) {
      bufor = tablica.wartosc(i);
      tablica.przypisz1(i,tablica.wartosc(j));
      tablica.przypisz1(j, bufor);
      i++;
      j--;
    }
    else
      return j;
  }
  
}

int podziel_odwrotnie(Tablica &tablica, int poczatek, int koniec) {
  int bufor, pivot;
  //pivot = poczatek;
  //pivot = koniec-1;
  pivot = (poczatek+koniec)/2;
  int temp = tablica.wartosc(pivot);
  int i = poczatek;
  int j = koniec;
  while(1) {
    while (tablica.wartosc(j)<temp)
      j--;
    while (tablica.wartosc(i)>temp)
      i++;
    if(i<j) {
      bufor = tablica.wartosc(i);
      tablica.przypisz1(i,tablica.wartosc(j));
      tablica.przypisz1(j, bufor);
      i++;
      j--;
    }
    else
      return j;
  }
  
}

void quicksort(Tablica &tablica, int poczatek, int koniec) {
  int srodek;
  if (poczatek<koniec) {
    srodek = podziel(tablica, poczatek, koniec);
    quicksort(tablica, poczatek, srodek);
    quicksort(tablica, srodek+1, koniec);
  }
}

void quicksort_odwrotnie(Tablica &tablica, int poczatek, int koniec) {
  int srodek;
  if (poczatek<koniec) {
    srodek = podziel_odwrotnie(tablica, poczatek, koniec);
    quicksort_odwrotnie(tablica, poczatek, srodek);
    quicksort_odwrotnie(tablica, srodek+1, koniec);
  }
}

int main() {
  Stoper stoper;
  srand (time(NULL));
  Tablica tablica(1);
  int wartosc;
  for(int i=0; i<ROZMIAR; i++) {
    wartosc = (rand()%100000);
    tablica.przypisz(i,wartosc);
  }
  //quicksort_odwrotnie(tablica, 0, ROZMIAR-1);
  cout << "\n\nQUICKSORT: \n";
  stoper.start();
  quicksort(tablica, 0, ROZMIAR-1);
  stoper.stop();
  cout << "\nCzas obliczen: " << stoper.czas() <<"\n\n\n";
}
