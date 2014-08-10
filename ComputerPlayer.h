#ifndef __COMPUTERPLAYER_H__
#define __COMPUTERPLAYER_H__

#include <string>

#include "RandMath.h"
#include "Player.h"
#include "BinStrings.h"

class ComputerPlayer : public Player {

	public:	

		ComputerPlayer(int winCon);

		std::pair<bool,bool> *makeMove(BinList *bl) const;

		bool isHuman() const;

};

#endif
