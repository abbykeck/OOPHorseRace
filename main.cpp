#include <cstdlib>
#include <ctime>
#include "horse.h"
#include "race.h"

int main() {
	srand(time(NULL));
	Race race;
	race.start();
	return 0;
}
