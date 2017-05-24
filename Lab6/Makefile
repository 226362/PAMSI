CPPFLAGS= -c -g -Wall -pedantic

start: main.o Element.o Lista.o TablicaAsocjacyjna.o stoper.o
	g++ -Wall -pedantic -o start main.o Element.o Lista.o TablicaAsocjacyjna.o stoper.o

main.o: main.cpp
	g++ ${CPPFLAGS} -o main.o main.cpp

Element.o: Element.cpp
	g++ ${CPPFLAGS} -o Element.o Element.cpp

Lista.o: Lista.cpp
	g++ ${CPPFLAGS} -o Lista.o Lista.cpp

TablicaAsocjacyjna.o: TablicaAsocjacyjna.cpp
	g++ ${CPPFLAGS} -o TablicaAsocjacyjna.o TablicaAsocjacyjna.cpp

stoper.o: stoper.cpp
	g++ ${CPPFLAGS} -o stoper.o stoper.cpp

clean:
	rm -f *.o *~
