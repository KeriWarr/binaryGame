#include "Player.h"


Player::Player(int winCon) : score(0), winCon(winCon) {}

Player::~Player() {}

int Player::getScore() const{return this->score;}

int Player::addScore(int incr) {return (this->score += incr);}

bool Player::hasWon(BinList *bl) const  {

	if(this->winCon >= 0 && this->winCon < BinStrings::NUM_STRING_SETS) {

		bool satisfied = false;

		for(std::vector<std::vector<bool>>::const_iterator j = BinStrings::BIN_STRINGS[this->winCon].begin(); j != BinStrings::BIN_STRINGS[this->winCon].end(); ++j) {

			if(bl->hasSubString(*j)) return true;
			
		}
			

	} else if((winCon == (0+BinStrings::NUM_STRING_SETS) && bl->getNum0() >= 10) || (winCon == (1+BinStrings::NUM_STRING_SETS) && bl->getNum1() >= 10)) return true;

	return false;

}

