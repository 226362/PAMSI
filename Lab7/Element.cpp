#include "Element.hh"
#include <iostream>

Element::Element() {
  value = 0;
  right = NULL;
  left = NULL;
  parent = NULL;
}

int Element::getValue() {
  return value;
}

Element* Element::getRight(){
  return right;
}

Element* Element::getLeft(){
  return left;
}

Element* Element::getParent(){
  return parent;
}

void Element::setValue(int wartosc){
  value = wartosc;
}

void Element::setRight(Element* wartosc){
  right = wartosc;
}

void Element::setLeft(Element* wartosc){
  left = wartosc;
}

void Element::setParent(Element* wartosc){
  parent = wartosc;
}

