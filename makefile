oopHorseRace: horse.o race.o main.o
	g++ horse.o race.o main.o -o oopHorseRace

horse.o: horse.cpp horse.h
	g++ -c horse.cpp

race.o: race.cpp race.h
	g++ -c race.cpp

main.o: main.cpp horse.h race.h
	g++ -c main.cpp

run: oppHorseRace
	./oppHorseRace
