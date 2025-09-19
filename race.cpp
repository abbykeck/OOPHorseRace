#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race() {
	for (int i = 0; i < NUM_HORSES; i++) {
		Race::horses[i].init(i, Race::TRACK_LENGTH);
	} // end for
} // end constructor
void Race::start() {
	bool keepGoing = true;
	while (keepGoing) {
		for (int i = 0; i < NUM_HORSES; i++) {
			Race::horses[i].advance();
			Race::horses[i].printLane();
			if (Race::horses[i].isWinner()) {
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press enter for another turn" << std::endl;
		std::cin.ignore();
	} // end while
} // end start
