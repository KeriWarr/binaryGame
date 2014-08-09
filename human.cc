#include "human.h"

human::human(int winCon) : player(winCon) {}

std::pair<bool,bool> human::makeMove(BinList *bl) {

	std::string in;

	while(true) {

		std::cin >> in;

		if(in == "L0" || in == "l0") {
			std::pair<bool,bool> ret (0,0);
			return ret;
		}
		else if(in == "L1" || in == "l1") {
			std::pair<bool,bool> ret (0,1);
			return ret;
		}
		else if(in == "R0" || in == "r0") {
			std::pair<bool,bool> ret (1,0);
			return ret;
		}
		else if(in == "R1" || in == "r1") {
			std::pair<bool,bool> ret (1,1);
			return ret;
		}
		else std::cout << "Invalid Input." << std::endl;

	}

}
