#ifndef GRACZ
#define GRACZ
#include "ruchy.hh"
class gracz
{
public:
  pionek ZaznaczPionek(ruchy &, int, int, char);
  bool RuszPionek(ruchy &, pionek&, int, int); //true- gdy bylo bicie i jest nastepne
  class brak_ruchu{};
  class brak_pionka_na_podanej_pozycji{};
  class pionek_przeciwnika{};
  class niedozwolony_ruch{};
};

#endif
