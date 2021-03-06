
#include <iostream>
#include <chrono>
#include <ctime>
#include "../inc/main.hh"
#include "../inc/tabl.hh"
#include "../inc/nowe.hh"
#include "../inc/run.hh"
#include "../inc/starter.hh"
#include "../inc/stoper.hh"
#define POWTORZENIA 10000
#define ROZMIAR 10


using namespace std;

// Zmień wartość, aby zmienić sposób rozszerzania tablicy:
// one 		- rozszerzaj o jeden element
// twice 	- rozszerzaj dwukrotnie
expandType typeOfExp = one;


int main (void) {
  
  
  Stoper czas;
  Starter do_pliku;
  long double srednia;
  for(int i=0;i<POWTORZENIA;i++ )
    {
      QuickSort obiekt;

      int ilosc_elementow = ROZMIAR;
      int *tablica = new int [ilosc_elementow];
      int *temp = new int [ilosc_elementow];
      
      for(int i=0; i<ilosc_elementow;i++)
	{
	  tablica[i]=rand()%10000;                          //GENEROWANIE LOSOWE
	}
      obiekt.quicksort_od_konca(tablica,0,ilosc_elementow-1);
      //obiekt.mergeSort(tablica,temp,0,ilosc_elementow-1);
      czas.start();
      obiekt.mergeSort(tablica,temp,0,ilosc_elementow-1);
      czas.stop();
      srednia+=czas.elapsed_Time();
      
      //obiekt.wyswietl();
      
      delete [] tablica;
      delete [] temp;
      //do_pliku.dumpToFile("pomiar");
      
    }
  srednia = srednia/(POWTORZENIA);
  cout << srednia <<endl;
}
