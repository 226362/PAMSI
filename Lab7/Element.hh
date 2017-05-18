#pragma once

class Element {

  int value;
  Element* left;
  Element* right;
  Element* parent;
  friend class Drzewo;

public:
  Element();
  int getValue();
  Element* getRight();
  Element* getLeft();
  Element* getParent();
  void setValue(int);
  void setRight(Element*);
  void setLeft(Element*);
  void setParent(Element*);
};
