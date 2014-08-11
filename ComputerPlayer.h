#ifndef __COMPUTERPLAYER_H__
#define __COMPUTERPLAYER_H__

#include <string>

#include "RandMath.h"
#include "Player.h"
#include "BinStrings.h"


class ComputerPlayer : public Player {

	public:	
 
		// cosntructor
		ComputerPlayer(int winCon);

		// determines an appropriate move and returns it
		// in its current state, the algorithm will simply make one of the 
		// possible moves which will directly aide in reaching the win condition
		std::pair<bool,bool> *makeMove(BinList *bl) const;

		// returns false; overloaded from Player.h
		bool isHuman() const;

};

#endif
