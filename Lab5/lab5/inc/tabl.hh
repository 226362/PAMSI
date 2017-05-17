#ifndef _TABL_HH
#define _TABL_HH


#include <iostream>
#include "main.hh"
#include "run.hh"

#define SIZE 100000

using namespace std;

//interfejs klasy tabn
class Itabn {
public:
	virtual void setExpandMode (expandType) = 0;
	virtual void add(int) = 0;
	virtual void showElems(void) = 0;
	virtual int nOE(void) = 0;
	virtual int aSize(void) = 0;
	virtual int& operator [] (int) = 0;
	virtual int operator [] (int) const = 0;
	virtual ~Itabn(){}
};


//klasa tworzy tablice o poczatkowym rozmiarze SIZE
class tabn : public Itabn{
private:
	int* tab;
	int allocatedSize;
	int numberOfElems;
	expandType expandMode;
public:

//konstruktor klasy tabn, domyslne rozszereznie 2x
	tabn() {
		allocatedSize = SIZE;
		numberOfElems = 0;
		tab = new int[SIZE];
		expandMode = twice;
	}


	virtual ~tabn() {
		delete [] tab;
	}

//typ poszerzenia
	virtual void setExpandMode(expandType);

	virtual void add(int);

private:
//dodaj ostatni
	/*virtual*/ void addElemLast(int);

//2x wieksza
	/*virtual*/ void addElemDoubleTabl(int);


public:
//wyswietla elementy
	virtual void showElems(void);
//wyswietla liczbe elementow
	virtual int nOE(void);
//wyswietla zaalokowane miejsce
	virtual int aSize(void);
//dostep do dowolnego elem tab bez sprawdzania zaresu
	virtual int& operator [] (int);

//odczyt elementu tab bez prawdzania zakresu
	virtual int operator [] (int) const;
};

//sposob testowania tab
class tabn_test : public Runnable  {
private:
	Itabn * test;
	unsigned int counter;
public:
//knstruktor klasy tabn_test
	tabn_test () : test (new tabn) {
		seedSrand();
	}
//destruktor klasy tabn_test
	virtual ~tabn_test () {
		delete test;
	}

//pozwoli na zmiane typu rozszerzenia tablicy
	void setTypeOfExpansion(expandType);

	//Przygotowuje rozmiar testu oraz ustawia tryb rozszerzania tablicy na podsawie zmiennej globalnej
	virtual bool prepare(unsigned int);

	//wykonanie testu
	virtual bool run();
};

#endif
