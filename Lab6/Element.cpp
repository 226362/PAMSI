#include "Element.hh"
#include <iostream>

string Element::getKey() {
  return key;
}


int Element::getValue() {
  return value;
}


Element* Element::getNext() {
  return next;
}


Element* Element::getPrev() {
  return prev;
}


void Element::setKey(string newKey) {
  key = newKey;
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
