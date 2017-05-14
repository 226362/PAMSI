#pragma once

class Element {

  int value;
  Element* next;
  Element* prev;
  friend class Lista;
  friend class Stos;
  friend class Kolejka;
public:
  int getValue();
  Element* getNext();
  Element* getPrev();
  void setValue(int);
  void setNext(Element*);
  void setPrev(Element*);
};
