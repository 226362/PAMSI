#include <iostream>
#include <cstdio>
#include <ctime>
#include "Drzewo.hh"
#include "stoper.hh"
#define POWTORZENIA 1000000
#define ROZMIAR 100000

using namespace std;


void zmierzCzasObliczen(Mierzalny* problem, int rozmiarProblemu, int iloscPowtorzen, double &srednia)  {
  problem->wykonajObliczenia(rozmiarProblemu, srednia, iloscPowtorzen);
}


int main() {
  double srednia = 0;
  Mierzalny* problem = new Drzewo();

  zmierzCzasObliczen(problem, ROZMIAR, POWTORZENIA, srednia);
  cout << "\nSredni czas obliczen wynosi: " << srednia << " s\n";

  return 0;
  
}
