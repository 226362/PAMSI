#include "Kolejka.hh"
#include "Element.hh"
#include "stoper.hh"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

Kolejka::Kolejka() {
  head = NULL;
  rozmiar = 0;
}


Kolejka::~Kolejka() {
  Element* temp;
  while (head) {
    temp = head->getNext();
    delete head;
    head = temp;
  }
  rozmiar = 0;
}


void Kolejka::add(int value) {
  Element* nowy = new Element();
  if (head==NULL) {
    head = nowy;
    tail = nowy;
    nowy->setNext(NULL);
  }
  else {
    Element* temp = tail;
    temp->setNext(nowy);
    nowy->setNext(NULL);
    tail=nowy;
  }
  rozmiar++;
}


Element* Kolejka::get() {
  Element* temp;
  temp = head;
  if(temp) {
    head = temp->getNext();
    rozmiar--;
    return temp;
  }
  return NULL;
}


int Kolejka::size() {
  return rozmiar;
}


Element* Kolejka::find(int szukana) {
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


void Kolejka::wykonajObliczenia(int Rozmiar, double& wynik) {
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


void Kolejka::resetuj(int Rozmiar) {
  Element* temp = NULL;
  while (head) {
    temp=this->get();
    delete temp;
  }
}
  

