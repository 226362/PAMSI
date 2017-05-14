#include "Stos.hh"
#include "Element.hh"
#include "stoper.hh"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

Stos::Stos() {
  head = NULL;
  rozmiar = 0;
}


Stos::~Stos() {
  Element* temp;
  while (head) {
    temp = head->getNext();
    delete head;
    head = temp;
  }
  rozmiar = 0;
}


void Stos::add(int value) {
  Element* nowy = new Element();
  if (head==NULL) {
    head = nowy;
    nowy->setNext(NULL);
  }
  else {
    Element* temp = head;
    head=nowy;
    nowy->setNext(temp);
  }
  rozmiar++;
}


Element* Stos::get() {
  Element* temp;
  temp = head;
  if(temp) {
    head = temp->getNext();
    rozmiar--;
    return temp;
  }
  return NULL;
}


int Stos::size() {
  return rozmiar;
}


Element* Stos::find(int szukana) {
  Element* temp = head;
  while(temp) {
    if(temp->getValue() == szukana)
      return temp;
    else {
      temp = this->get();
      delete temp;
      temp = head;
    }
  }
    return NULL;
}


void Stos::wykonajObliczenia(int Rozmiar, double& wynik) {
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


void Stos::resetuj(int Rozmiar) {
  Element* temp = NULL;
  while (head) {
    temp=this->get();
    delete temp;
  }
}
  

