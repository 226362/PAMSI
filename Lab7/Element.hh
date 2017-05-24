#pragma once

class Element {

  int value;
  Element* left;
  Element* right;
  Element* parent;
  char color;
  friend class Drzewo;

public:
  Element();
  int getValue();
  Element* getRight();
  Element* getLeft();
  Element* getParent();
  char getColor();
  void setValue(int);
  void setRight(Element*);
  void setLeft(Element*);
  void setParent(Element*);
  void setColor(char);
};
