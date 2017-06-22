#ifndef PLANSZA_HH
#define PLANSZA_HH
#include <vector>
#define rozmiar 8
using namespace std;
struct pozycja
{
  int I;
  int J;
  bool operator ==(const pozycja &);
  bool operator !=(const pozycja &);
};
struct pionek
{
  bool brak=true;
  int id=0;      // numerowane od 1 do 12, 0 gdy brak pionka
  bool bialy;
  bool damka=false;
  pozycja poz; //pierwsza liczba - wiersz, druga - kolumna, od 0 do 7
  bool operator ==(pionek &);
  bool operator !=(pionek &);
};
class plansza
{
private:
  pionek tablica[rozmiar][rozmiar];
  vector<pionek> biale;
  vector<pionek> czarne;
public:
  plansza();
  ~plansza();
  class wyjscie_poza_plansze{};
  class brak_pionka{};
  class pole_zajete{};
  bool wyjscie_poza_tablice(int, int);
  void przestaw(pionek, int, int);
  void przestaw(int, int, int, int);
  void usun(pionek);
  void usun(int, int);
  pionek wyszukajPionek(int, int);
  pionek wyszukajPionek(int, char);
  vector<pionek> BialeWGrze ();
  vector<pionek> CzarneWGrze ();
  void wyswietl();
  void wyswietl(pionek);
  void wyswietl(int, int);
  //plansza& operator = (const plansza&);
  //plansza(const plansza&);
};

#endif
