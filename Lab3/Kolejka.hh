#include "iMierzalny.hh"
#include "iKontener.hh"


class Kolejka : public Kontener, public Mierzalny {

  Element* head;
  Element* tail;
  int rozmiar;
  
public:
  Kolejka();
  ~Kolejka();
  void add(int);
  Element* get();
  int size();
  Element* find(int);
  void wykonajObliczenia(int, double&);
  void resetuj(int);
};
