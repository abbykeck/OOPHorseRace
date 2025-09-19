#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <cstdlib>
class Horse {
	private:
		int position;
		int index;
		int TRACK_LENGTH;
	public:
		Horse();
		void init(int index, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
}; // end class def

#endif
