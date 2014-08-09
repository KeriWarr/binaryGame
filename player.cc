#include "player.h"

player::player(int winCon) : score(0), winCon(winCon) {}

player::~player() {}

int player::getScore() const{return this->score;}

int player::addScore(int incr) {return (this->score += incr);}

bool player::hasWon(BinList *bl) const  {

	if((winCon == 0 && bl->getNum0() >= 10) 
	|| (winCon == 1 && bl->getNum1() >= 10) 
	|| (winCon == 2 && bl->hasSubString({0,1,1,0,0,0})) 
	|| (winCon == 3 && bl->hasSubString({1,0,0,1,1,1})) 
	|| (winCon == 4 && bl->hasSubString({0,0,0,1,1,0})) 
	|| (winCon == 5 && bl->hasSubString({1,1,1,0,0,1})) 
	|| (winCon == 6 && bl->hasSubString({0,0,0,0,0})) 
	|| (winCon == 7 && bl->hasSubString({1,1,1,1,1})) 
	|| (winCon == 8 && (bl->hasSubString({0,1,0,1,0,1,0}) || bl->hasSubString({1,0,1,0,1,0,1})))) return true;

	return false;

}