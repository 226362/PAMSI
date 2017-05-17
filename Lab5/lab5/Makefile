G = g++
GFLAGS = -Wall -pedantic -g -std=c++11 -Iinc
ALLFILES = obj/tabl.o obj/nowe.o obj/run.o src/main.cpp inc/tabl.hh inc/nowe.hh inc/main.hh inc/run.hh inc/stoper.hh obj/stoper.o inc/starter.hh obj/starter.o

quick: obj $(ALLFILES)
	$(G) $(GFLAGS) ./obj/tabl.o ./obj/run.o ./obj/stoper.o ./obj/starter.o ./obj/nowe.o ./src/main.cpp -o quick

obj:
	mkdir obj

obj/starter.o: src/starter.cpp inc/starter.hh src/stoper.cpp inc/stoper.hh src/run.cpp inc/run.hh
	$(G) $(GFLAGS) -c ./src/starter.cpp -o ./obj/starter.o

obj/run.o: src/run.cpp inc/run.hh src/tabl.cpp inc/tabl.hh
	$(G) $(GFLAGS) -c ./src/run.cpp -o ./obj/run.o

obj/nowe.o: src/nowe.cpp inc/nowe.hh inc/tabl.hh
		$(G) $(GFLAGS) -c ./src/nowe.cpp -o ./obj/nowe.o

obj/tabl.o: src/tabl.cpp inc/tabl.hh inc/main.hh
	$(G) $(GFLAGS) -c ./src/tabl.cpp -o ./obj/tabl.o

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	$(G) $(GFLAGS) -c ./src/stoper.cpp -o ./obj/stoper.o

clean:
	rm -fr ./obj/*.o quick

start:
	./quick

remake:
	rm -fr ./obj/*.o quick
	make
