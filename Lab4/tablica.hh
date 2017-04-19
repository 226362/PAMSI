
class Tablica {
  
  int _rozmiar;
  int _wypelnienie;
  int*  _Tablica;
  void powieksz(int);
  
public:
  Tablica();
  Tablica(int);
  ~Tablica();
  void przypisz(int, int);
  void przypisz1(int, int);
  void odczytaj(int, int&);
  int wartosc(int);
  void pokaz_rozmiar(int&);

};
  
