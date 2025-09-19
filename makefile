CFLAGS= -g -Wall
oopHorseRace: horse.o race.o main.o
	g++ $(CFLAGS) horse.o race.o main.o -o oopHorseRace

horse.o: horse.cpp horse.h
	g++ $(CFLAGS) -c horse.cpp

race.o: race.cpp race.h
	g++ $(CFLAGS) -c race.cpp

main.o: main.cpp horse.h race.h
	g++ $(CFLAGS) -c main.cpp

run: oopHorseRace
	./oopHorseRace

clean:
	rm *.o
	rm oopHorseRace

debug: oopHorseRace
	gdb oopHorseRace
