#include <ctime>

class Stoper {

  clock_t poczatek;
  clock_t koniec;

public:
  void start();
  void stop();
  double czas();

};
