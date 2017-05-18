#include <iostream>
#include <cstdio>
#include <ctime>
#include "Lista.hh"
#include "Stos.hh"
#include "Kolejka.hh"
#include "stoper.hh"
#define POWTORZENIA 100
#define ROZMIAR 1000000

using namespace std;


void zmierzCzasObliczen(Mierzalny* problem, int rozmiarProblemu, int iloscPowtorzen, double &srednia)  {
  double wynik=0;
  for (int i=0; i<iloscPowtorzen; i++) {
    problem->wykonajObliczenia(rozmiarProblemu, wynik);
    problem->resetuj(ROZMIAR);
    srednia += wynik;
  }
  srednia /= iloscPowtorzen;
  }


int main() {
  double srednia = 0;
  Mierzalny* problem = new Kolejka();

  zmierzCzasObliczen(problem, ROZMIAR, POWTORZENIA, srednia);
  cout << "\nSredni czas obliczen wynosi: " << srednia << " s\n";

  return 0;
  
}
