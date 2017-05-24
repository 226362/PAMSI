#include "Lista.hh"
#include "Element.hh"
#include "stoper.hh"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;


Lista::Lista() {
  head = NULL;
  tail = NULL;
  rozmiar = 0;
}


Lista::~Lista() {
  Element* temp;
  while (head) {
    temp = head->getNext();
    delete head;
    head = temp;
  }
  rozmiar = 0;
}


void Lista::add(int costam) {

}


void Lista::dodaj(Element* nowy) {
  if(head==NULL) {
    head = nowy;
    tail = nowy;
    nowy->setNext(NULL);
  }
  else {
    Element* temp = head;
    head = nowy;
    nowy->setNext(temp);
  }
  rozmiar++;
}


Element* Lista::get() {
  Element* temp;
  temp = head;
  if(temp) {
    head = temp->getNext();
    rozmiar--;
    return temp;
  }
  return NULL;
}


int Lista::size() {
  return rozmiar;
}


Element* Lista::find(int szukana) {

  return NULL;
}

Element* Lista::znajdz(string szukana) {
  Element* temp = head;
  while(temp) {
    if (temp->getKey() == szukana)
      return temp;
    else
      temp = temp->getNext();
  }
  return NULL;
}
  

void Lista::wykonajObliczenia(int Rozmiar, double& wynik) {
  Stoper stoper;
  srand(time(NULL));
  for (int i=0; i<Rozmiar; i++) {
    this->add(rand()%Rozmiar);
  }
  stoper.start();
  Element* temp = this->find(rand()%Rozmiar);
  if(temp);
  stoper.stop();
  wynik = stoper.czas();
}


void Lista::resetuj(int Rozmiar) {
  Element* temp = NULL;
  while(head) {
    temp=this->get();
    delete temp;
  }
}


