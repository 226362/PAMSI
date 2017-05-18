#include "Drzewo.hh"
#include <iostream>

Drzewo::Drzewo() {
  root = NULL;
  rozmiar = 0;
}

Drzewo::~Drzewo() {}

bool Drzewo::isExternal(Element* temp){
  if(temp->getLeft())
    return false;
  if(temp->getRight())
    return false;
  return true;
}

void Drzewo::add(int wartosc) {

  Element* temp = new Element();
  Element* p;
  temp->setValue(wartosc);
  temp->setRight(NULL);
  temp->setLeft(NULL);
  p = root;

  if (!root)
    root = temp;


  else{
    while(true) {
      if(wartosc <= p->getValue() ) {
	if(!p->getLeft()) {
	  p->setLeft(temp);
	  temp->setParent(p);
	  break;
	}
	else p = p->getLeft();
      }
      else {
	if(!p->getRight()) {
	  p->setRight(temp);
	  temp->setParent(p);
	  break;
	}
	else p = p->getRight();
      }
    }
  }
  rozmiar++;
}
Element* Drzewo::get(){return NULL;}
int Drzewo::size(){return rozmiar;}
Element* Drzewo::find(int){return NULL;}
void Drzewo::wykonajObliczenia(int, double&){}
void Drzewo::resetuj(int){}
    
