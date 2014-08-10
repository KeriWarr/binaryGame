#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer(int winCon) : Player(winCon) {}

std::pair<bool,bool> *ComputerPlayer::makeMove(BinList *bl) const {

	if(this->winCon >= 0 && this->winCon < BinStrings::NUM_STRING_SETS) {

		for(std::vector<std::vector<bool>>::const_iterator j = BinStrings::BIN_STRINGS[this->winCon].begin(); j != BinStrings::BIN_STRINGS[this->winCon].end(); ++j) {

			for(int i = j->size()-1; i >= 1; --i) {
			
				std::vector<bool> initialSubStr (j->begin(),(j->begin()+i));
				std::vector<bool> terminalSubStr (j->end()-i, j->end());

				if(bl->hasSubString(initialSubStr, false)) {
					std::pair<bool,bool> *ret = new std::pair<bool,bool> (1,(*j)[i]);
					return ret;

				} else if(bl->hasSubString(terminalSubStr,true)) {
					std::pair<bool,bool> *ret = new std::pair<bool,bool> (0,(*j)[j->size()-i-1]);
					return ret;

				}
				
			}

			int substrof;
			if((substrof = bl->subStringOf(*j)) != -1) {

				if(substrof == 0) {

					std::pair<bool,bool> *ret = new std::pair<bool,bool> (1,(*j)[bl->getLength()]);
					return ret;

				} else if(substrof == j->size()-bl->getLength()) {

					std::pair<bool,bool> *ret = new std::pair<bool,bool> (0,(*j)[j->size()-bl->getLength()-1]);
					return ret;

				} else {

					int side = RandMath::getRand(0,1);
					std::pair<bool,bool> *ret = new std::pair<bool,bool> (side,(*j)[substrof-1+(side*(bl->getLength()+1))]);
					return ret;

				}

			}
 
			if(j == BinStrings::BIN_STRINGS[this->winCon].end()-1) {
				std::pair<bool,bool> *ret = new std::pair<bool,bool> (1,(*j)[0]);
				return ret;

			}

		}

	} else if(this->winCon == (0+BinStrings::NUM_STRING_SETS)) {

		std::pair<bool,bool> *ret = new std::pair<bool,bool> (RandMath::getRand(0,1),0);
		return ret;

	} else if(this->winCon == (1+BinStrings::NUM_STRING_SETS)) {

		std::pair<bool,bool> *ret =  new std::pair<bool,bool> (RandMath::getRand(0,1),1);
		return ret;

	}

	std::pair<bool,bool> *ret = new std::pair<bool,bool> (RandMath::getRand(0,1),RandMath::getRand(0,1));
	return ret;

}

bool ComputerPlayer::isHuman() const {return false;}
