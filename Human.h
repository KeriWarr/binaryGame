#ifndef __HUMAN_H__
#define __HUMAN_H__

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"


class Human : public Player {
		
	public:
		
		// constructor!
		Human(int winCon);

		// takes input from the keyboard for a move
		std::pair<bool,bool> *makeMove(BinList *bl) const;

		// returns true;
		bool isHuman() const;
		
};

#endif
