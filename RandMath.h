#ifndef __RANDMATH_H__
#define __RANDMATH_H__

#include <ctime>
#include <cstdlib>
#include <cmath>


class RandMath {

		static bool seeded;

		static int seed;

	public:

		// calls srand(time(NULL)); prevents multiple seedings
		static void seedRand();

		// calls sradn(seed); prevents multiple seedings
		static void seedRand(int seed);

		// returns seed
		static int getSeed();

		// generates an integer in between bot and top, inclusive
		static int getRand(const int bot, const int top);
		
		// generates a float in between bot and top, inclusive
		static float getRand(const float bot, const float top);
	
};

#endif
