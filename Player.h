#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <utility>
#include <iterator>

#include "BinList.h"
#include "BinStrings.h"


class Player {

	protected:

		int score;
		int winCon;
	
	public:
	
		// constructor
		Player(int winCon);		
		
		// destrcutor
		virtual ~Player();
		
		// return score
		int getScore() const;
		
		// return score += incr
		int addScore(int incr);
		
		// abstract move get fucntion for human or computer players
		virtual std::pair<bool,bool> *makeMove(BinList *bl) const = 0;

		// reuturns 1 if of subclass Human, 0 otherwise
		virtual bool isHuman() const = 0;
		
		// returns true if the players win condition, specified by winCon, 
		//  is satisfied
		bool hasWon(BinList *bl) const;
};

#endif
