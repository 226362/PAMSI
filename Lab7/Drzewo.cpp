#include "Drzewo.hh"
#include "stoper.hh"
#include <iostream>
#include <cstdlib>

using namespace std;

Drzewo::Drzewo() {
  straznik.setColor('B');
  straznik.setParent(&straznik);
  straznik.setLeft(&straznik);
  straznik.setRight(&straznik);
  root = &straznik;
  rozmiar = 0;
}


Drzewo::~Drzewo() {
  relase(root);
}


void Drzewo::relase(Element* p) {
  if(p!=&straznik) {
    relase(p->getLeft());
    relase(p->getRight());
    delete p;
    rozmiar--;
  }
}


Element* Drzewo::find(int szukana) {
  Element* temp;
  temp = root;

  while((temp!=&straznik) && (temp->getValue()!=szukana)) {
    if(szukana<temp->getValue())
      temp = temp->getLeft();
    else
      temp = temp->getRight();
  }
  if (temp==&straznik)
    return NULL;
  return temp;
}


void Drzewo::rotLeft(Element* A) {
  Element* B;
  Element* temp;
  
  B = A->getRight();
  if(B!=&straznik) {
    temp = A->getParent();
    A->setRight(B->getLeft());
    if (A->getRight()!=&straznik)
      A->getRight()->setParent(A);
    B->setLeft(A);
    B->setParent(temp);
    A->setParent(B);

    if(temp!=&straznik) {
      if(temp->getLeft() == A)
	temp->setLeft(B);
      else
	temp->setRight(B);
    }
    else
      root = B;
  }
}


void Drzewo::rotRight(Element* A) {
  Element* B;
  Element* temp;
  
  B = A->getLeft();
  if(B!=&straznik) {
    temp = A->getParent();
    A->setLeft(B->getRight());
    if (A->getLeft()!=&straznik)
      A->getLeft()->setParent(A);
    B->setRight(A);
    B->setParent(temp);
    A->setParent(B);

    if(temp!=&straznik) {
      if(temp->getLeft() == A)
	temp->setLeft(B);
      else
	temp->setRight(B);
    }
    else
      root = B;
  }
}
      
  



void Drzewo::add(int wartosc) {
  Element* nowy;
  Element* wujek;

  nowy = new Element();
  nowy->setRight(&straznik);
  nowy->setLeft(&straznik);
  nowy->setParent(root);
  nowy->setValue(wartosc);

  if(nowy->getParent() == &straznik)
    root = nowy;
  else {
    while(true) {
      if(wartosc < nowy->getParent()->getValue()) {
	if(nowy->getParent()->getLeft() == &straznik) {
	  nowy->getParent()->setLeft(nowy);
	  break;
	}
	nowy->setParent(nowy->getParent()->getLeft());

      }
      else {
	if(nowy->getParent()->getRight() == &straznik) {
	  nowy->getParent()->setRight(nowy);
	  break;
	}
	nowy->setParent(nowy->getParent()->getRight());
      }
    }
    nowy->setColor('R');
  }

  
  while((nowy!=root) && (nowy->getParent()->getColor() == 'R')) {
    
    if(nowy->getParent() == nowy->getParent()->getParent()->getLeft()) {
      wujek = nowy->getParent()->getParent()->getRight();
      
      if (wujek->getColor() == 'R') {
	nowy->getParent()->setColor('B');
	wujek->setColor('B');
	nowy->getParent()->getParent()->setColor('R');
	continue;
      }
      
      if (nowy == nowy->getParent()->getRight()) {
	nowy = nowy->getParent();
	rotLeft(nowy);
      }
      
      nowy->getParent()->setColor('B');
      nowy->getParent()->getParent()->setColor('R');
      rotRight(nowy->getParent()->getParent());
      break;
    }
    else {
      wujek = nowy->getParent()->getParent()->getLeft();
      
      if (wujek->getColor() == 'R') {
	nowy->getParent()->setColor('B');
	wujek->setColor('B');
	nowy->getParent()->getParent()->setColor('R');
	continue;
      }
      
      if (nowy == nowy->getParent()->getLeft()) {
	nowy = nowy->getParent();
	rotRight(nowy);
      }
      
      nowy->getParent()->setColor('B');
      nowy->getParent()->getParent()->setColor('R');
      rotLeft(nowy->getParent()->getParent());
      break;
    }
  }
  root->setColor('B');
  rozmiar++;
}


Element* Drzewo::get() {
  return NULL;
}


int Drzewo::size() {
  return rozmiar;
}


void Drzewo::wykonajObliczenia(int Rozmiar, double& wynik, int iloscPowtorzen) {
  Stoper stoper;
  int wielkosc = 2*Rozmiar;
  srand(time(NULL));
  cout << "\nZaczynam tworzyc drzewo\n";
  stoper.start();
  for(int i=0; i<Rozmiar; i++) {
    this->add(rand()%wielkosc);
  }
  cout << "\nSkonczylem tworzyc drzewo\n";
  stoper.stop();
  cout << "\nCzas tworzenia drzewa: " << stoper.czas() << " s.";
  for(int i=0; i<iloscPowtorzen; i++) {
    stoper.start();
    Element* temp = this->find(rand()%wielkosc);
    if(temp);
    stoper.stop();
    wynik += stoper.czas();
  }
  wynik /= iloscPowtorzen;
}


void Drzewo::resetuj(int) {
  this->relase(root);
  rozmiar = 0;
}

