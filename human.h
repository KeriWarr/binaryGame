#ifndef __HUMAN_H__
#define __HUMAN_H__
#include "player.h"

#include <iostream>
#include <string>
#include <vector>

class human : public player {
		
	public:
		
		//
		human(int winCon);

		//
		std::pair<bool,bool> makeMove(BinList *bl);
		
};

#endif
