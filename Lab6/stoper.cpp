#include <ctime>
#include "stoper.hh"


void Stoper::start() {

  poczatek = clock();

}


void Stoper::stop() {

  koniec = clock();

}


double Stoper::czas() {

  double czas = (double)(koniec-poczatek)/CLOCKS_PER_SEC;
  return czas;

}


