#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse() {
	Horse::position = 0;
	Horse::index = -1;
	Horse::TRACK_LENGTH = -1;
} // end constructor

void Horse::init(int index, int trackLength) {
	Horse::index = index;
	Horse::TRACK_LENGTH = trackLength;
} // end init

void Horse::advance() {
	int coin = -1;
	coin = rand() % 2;
	Horse::position += coin;
} // end advance

void Horse::printLane() {
	for (int i = 0; i < Horse::TRACK_LENGTH; i++) {
		if (i == Horse::position) {
			std::cout << Horse::index;
		} else {
			std::cout << ".";
		} // end if
	} // end for
	std::cout << std::endl;
} // end printLane

bool Horse::isWinner() {
	if (Horse::position >= Horse::TRACK_LENGTH) {
		std::cout << "Horse " << Horse::index << " WINS!!!" << std::endl;
		return true;
	} else {
		return false;
	} // end if
} // end isWinner
