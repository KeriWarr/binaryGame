#include "Human.h"


Human::Human(int winCon) : Player(winCon) {}

std::pair<bool,bool> *Human::makeMove(BinList *bl) const {

	std::string in;

	while(true) {

		std::cout << "enter a move [LR][01]: ";
		std::cin >> in;

		if(in == "L0" || in == "l0") {
			std::pair<bool,bool> *ret = new std::pair<bool,bool> (0,0);
			return ret;	
		}
		else if(in == "L1" || in == "l1") {
			std::pair<bool,bool> *ret = new std::pair<bool,bool> (0,1);
			return ret;
		}
		else if(in == "R0" || in == "r0") {
			std::pair<bool,bool> *ret = new std::pair<bool,bool> (1,0);
			return ret;
		}
		else if(in == "R1" || in == "r1") {
			std::pair<bool,bool> *ret = new std::pair<bool,bool> (1,1);
			return ret;
		}
		else std::cout << "Invalid Input." << std::endl;

		if(std::cin.eof()) return NULL;

	}

}

bool Human::isHuman() const {return true;}
