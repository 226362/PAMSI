#include "Element.hh"
#include <iostream>


int Element::getValue() {
  return value;
}


Element* Element::getNext() {
  return next;
}


Element* Element::getPrev() {
  return prev;
}


void Element::setValue(int newValue) {
  value = newValue;
}

void Element::setNext(Element* newElement) {
  next = newElement;
}

void Element::setPrev(Element* newElement) {
  prev = newElement;
}
