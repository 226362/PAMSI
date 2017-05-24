#include "Element.hh"
#include <iostream>

Element::Element() {
  value = 0;
  right = NULL;
  left = NULL;
  parent = NULL;
  color = 'a';
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

char Element::getColor(){
  return color;
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

void Element::setColor(char kolor){
  color = kolor;
}

