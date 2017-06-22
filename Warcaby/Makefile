CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: Warcaby
	./Warcaby

Warcaby: obj obj/main.o obj/RuchDane.o obj/plansza.o obj/ruchy.o obj/Symulacja.o obj/Pojemnik.o obj/gracz.o
	g++ -Wall -pedantic -std=c++0x -o Warcaby obj/main.o obj/RuchDane.o obj/plansza.o obj/ruchy.o obj/Symulacja.o obj/Pojemnik.o obj/gracz.o

obj:
	mkdir ./obj

obj/main.o: src/main3.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main3.cpp

obj/RuchDane.o: inc/RuchDane.hh src/RuchDane.cpp
	g++ -c ${CXXFLAGS} -o obj/RuchDane.o src/RuchDane.cpp

obj/plansza.o: inc/plansza.hh src/plansza.cpp
	g++ -c ${CXXFLAGS} -o obj/plansza.o src/plansza.cpp

obj/ruchy.o: inc/ruchy.hh src/ruchy.cpp
	g++ -c ${CXXFLAGS} -o obj/ruchy.o src/ruchy.cpp

obj/Symulacja.o: inc/Symulacja.hh src/Symulacja.cpp
	g++ -c ${CXXFLAGS} -o obj/Symulacja.o src/Symulacja.cpp

obj/Pojemnik.o: inc/Pojemnik.hh src/Pojemnik.cpp
	g++ -c ${CXXFLAGS} -o obj/Pojemnik.o src/Pojemnik.cpp

obj/gracz.o: inc/gracz.hh src/gracz.cpp
	g++ -c ${CXXFLAGS} -o obj/gracz.o src/gracz.cpp


clean:
	rm -f obj/*.o Warcaby
