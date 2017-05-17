#ifndef _RUN_HH
#define _RUN_HH


#include <iostream>


using namespace std;

//klasa ujednolica sposób uruchamiania klasy badającej algorytm
class Runnable {
public:
//przygotowanie badan
	virtual bool prepare (unsigned int) = 0;
//przeprowadza badania
	virtual bool run () = 0;

//destruktor klasy
	virtual ~Runnable () {}

//Metoda do ustawienie punktu generatora losowego
	void seedSrand (void);
	//metoda generuje liczby losowe 0..9
	int generateRandomDgt(void);
};




#endif
