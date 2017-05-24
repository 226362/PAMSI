#pragma once
#include <string>

using namespace std;

class Element {

  string key;
  int value;
  Element* next;
  Element* prev;
  friend class Lista;
  friend class Stos;
  friend class Kolejka;
public:
  string getKey();
  int getValue();
  Element* getNext();
  Element* getPrev();
  void setKey(string);
  void setValue(int);
  void setNext(Element*);
  void setPrev(Element*);
};
