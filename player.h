#ifndef __PLAYER_H__
#define __PLAYER_H__
#include <utility>
#include "BinList.h"

class player {

		int score;
		int winCon;
	
	public:
	
		// constructor
		player(int winCon);		
		
		// destrcutor
		virtual ~player();
		
		// return score
		int getScore() const;
		
		// return score += incr
		int addScore(int incr);
		
		// calculates a move
		virtual std::pair<bool,bool> makeMove(BinList *bl) = 0;
		
		//
		bool hasWon(BinList *bl) const;
};

#endif
