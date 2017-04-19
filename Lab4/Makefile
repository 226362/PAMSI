CPPFLAGS= -c -g -Wall -pedantic

start: main.o tablica.o stoper.o
	g++ -Wall -pedantic -o start main.o tablica.o stoper.o

main.o: main.cpp
	g++ ${CPPFLAGS} -o main.o main.cpp

tablica.o: tablica.cpp
	g++ ${CPPFLAGS} -o tablica.o tablica.cpp

stoper.o: stoper.cpp
	g++ ${CPPFLAGS} -o stoper.o stoper.cpp

clean:
	rm -f *.o *~
