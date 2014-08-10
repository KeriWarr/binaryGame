#include "RandMath.h"

bool RandMath::seeded = false;

int RandMath::seed = 0;

void RandMath::seedRand() {
	
	if(!RandMath::seeded)	{
		
		int t = time(NULL);

		srand(t);
		RandMath::seed = t;
		RandMath::seeded = true;
		
	}	
	
}

void RandMath::seedRand(int seed) {

	if(!RandMath::seeded) {

		srand(seed);
		RandMath::seed = seed;
		RandMath::seeded = true;

	}

}

int RandMath::getSeed() {

	return RandMath::seed;

}

int RandMath::getRand(const int bot, const int top) {
	
	RandMath::seedRand();
	
	return (rand() % (top - bot + 1)) + bot;
	
}

float RandMath::getRand(const float bot, const float top) {
	
	RandMath::seedRand();
	
	return (((float)((rand()%((int)((top-bot+1)*1000)))+(int)bot))/1000.0);
	
}
