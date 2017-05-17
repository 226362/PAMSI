#ifndef _STARTER_HH
#define _STARTER_HH


#include "stoper.hh"
#include "run.hh"
#include "tabl.hh"
#include <fstream>

//Plik definiujacy klase Starter
//Klasa pozwala na przeprowadzenie testów
class Starter {
private:
	Runnable * runner;
	IStoper * stoper;
	unsigned int testSizeToDump;
public:

//konstruktor klasy tabn
	Starter () : runner(new tabn_test), stoper(new Stoper) {
	}

//destryktor klasy starter
	virtual ~Starter () {
		delete runner;
		delete stoper;
	}

//wielkosc testu
	void setTestSize(unsigned int);

//czas trwania testu
	void printResults(void);

//przeprowadza test
	void test (void);

	//zapis do pliku
	// wielkosc, czas [ms]
	void dumpToFile (string);
};

#endif
