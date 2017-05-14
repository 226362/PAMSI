#include "iMierzalny.hh"
#include "iKontener.hh"


class Stos : public Kontener, public Mierzalny {

  Element* head;
  int rozmiar;
  
public:
  Stos();
  ~Stos();
  void add(int);
  Element* get();
  int size();
  Element* find(int);
  void wykonajObliczenia(int, double&);
  void resetuj(int);
  
};
