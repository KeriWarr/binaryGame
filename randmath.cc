#include "randmath.h"

bool randMath::seeded = false;

int randMath::seed = 0;

void randMath::seedRand() {
	
	if(!seeded)	{
		
		int t = time(NULL);

		srand(t);
		randMath::seed = t;
		randMath::seeded = true;
		
	}	
	
}

void randMath::seedRand(int seed) {

	if(!seeded) {

		srand(seed);
		randMath::seed = seed;
		randMath::seeded = true;

	}

}

int randMath::getSeed() {

	return randMath::seed;

}

int randMath::getRand(const int bot, const int top) {
	
	randMath::seedRand();
	
	return (rand() % (top - bot + 1)) + bot;
	
}

float randMath::getRand(const float bot, const float top) {
	
	randMath::seedRand();
	
	return (((float)((rand()%((int)((top-bot+1)*1000)))+(int)bot))/1000.0);
	
}
