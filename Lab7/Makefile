CPPFLAGS= -c -g -Wall -pedantic

start: main.o Element.o Drzewo.o  stoper.o
	g++ -Wall -pedantic -o start main.o Element.o Drzewo.o  stoper.o

main.o: main.cpp
	g++ ${CPPFLAGS} -o main.o main.cpp

Element.o: Element.cpp
	g++ ${CPPFLAGS} -o Element.o Element.cpp

Lista.o: Drzewo.cpp
	g++ ${CPPFLAGS} -o Drzewo.o Drzewo.cpp

Stos.o: Stos.cpp
	g++ ${CPPFLAGS} -o Stos.o Stos.cpp

stoper.o: stoper.cpp
	g++ ${CPPFLAGS} -o stoper.o stoper.cpp

clean:
	rm -f *.o *~
