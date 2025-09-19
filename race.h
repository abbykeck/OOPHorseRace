#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		const static int NUM_HORSES = 5;
		int TRACK_LENGTH = 15;
		Horse horses[NUM_HORSES];
	public:
		Race();
		void start();
}; // end class def

#endif
