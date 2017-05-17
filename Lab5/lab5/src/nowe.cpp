#include<iostream>
#include"../inc/nowe.hh"
#include"../inc/tabl.hh"
using namespace std;




//void Runnable::seedSrand
void QuickSort::quicksort(int *tablica, int lewy, int prawy)
{
  //  int v=tablica[lewy];
    int v=tablica[(lewy+prawy)/2];
    //int v=tablica[prawy];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while (tablica[i]<v) i++;
        while (tablica[j]>v) j--;
        if (i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++; j--;
        }
    }
    while (i<=j);
    if (j>lewy) quicksort(tablica,lewy, j);
    if (i<prawy) quicksort(tablica, i, prawy);
}




void QuickSort::quicksort_od_konca(int *tablica, int lewy, int prawy)
{
    //int v=tablica[lewy];
    int v=tablica[(lewy+prawy)/2];
    //int v=tablica[prawy];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while (tablica[i]>v) i++;
        while (tablica[j]<v) j--;
        if (i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++; j--;
        }
    }
    while (i<=j);
    if (j>lewy) quicksort_od_konca(tablica,lewy, j);
    if (i<prawy) quicksort_od_konca(tablica, i, prawy);
}


void QuickSort::merge(int* tablica, int* temp, int start, int srodek, int koniec) {
  int i=start, j=srodek+1, k=0;

  while (i<=srodek && j<=koniec) {
    if (tablica[j] < tablica[i]) {
      temp[k] = tablica[j];
      j++;
    }
    else {
      temp[k] = tablica[i];
      i++;
    }
    k++;
  }

  if (i<=srodek) {
    while (i<=srodek) {
      temp[k] = tablica[i];
      i++;
      k++;
    }
  }
  else {
    while (j<=koniec) {
      temp[k] = tablica[j];
      j++;
      k++;
    }
  }

  for (i=0; i<=koniec-start; i++)
    tablica[start+i] = temp[i];
}


void QuickSort::mergeSort(int* tablica,int* temp, int start, int koniec) {
  int srodek;
  
  if (start!=koniec) {
    srodek = (start+koniec)/2;
    mergeSort(tablica, temp, start, srodek);
    mergeSort(tablica, temp,  srodek+1, koniec);
    merge(tablica, temp,  start, srodek, koniec);
  }
}
  
    


void QuickSort::wyswietl()
{
  for(int i=0; i<ilosc_elementow; i++)
  {
  	cout<<tablica[i]<<endl;  //WYSWIETLENIE POSORTOWANYCH
  }
}
