#include "BinNode.h"
#include "BinList.h"
#include "player.h"
#include "human.h"
#include "randmath.h"
#include <iostream>
#include <utility>

int main() {

	BinList *bl = new BinList();
	int winCon0 = randMath::getRand(0,8);
	int winCon1 = randMath::getRand(0,7);
	if(winCon1 == winCon0) winCon1++;
	player *p0 = new human(winCon0);
	player *p1 = new human(winCon1);


	std::cout << "p0 wincon:" << winCon0 << std::endl;
	std::cout << "p1 wincon:" << winCon1 << std::endl;

	while(true) {

		if(p0->hasWon(bl)) {std::cout << "Player 0 has won." << std::endl; break;}
		std::cout << "Player 0 enter move: ";
		std::pair<bool,bool> move0 = p0->makeMove(bl);
		if(move0.first == 0) {

			if(move0.second == 0) bl->addFront(false);			
			else bl->addFront(true);

		} else {

			if(move0.second == 0) bl->addEnd(false);			
			else bl->addEnd(true);

		}
		if(p0->hasWon(bl)) {std::cout << "Player 0 has won." << std::endl; break;}
		std::cout << std::endl <<  "Current string: " << bl->print() << std::endl;
		if(p1->hasWon(bl)) {std::cout << "Player 1 has won." << std::endl; break;}
		std::cout << "Player 1 enter move: ";
		std::pair<bool,bool> move1 = p1->makeMove(bl);
		if(move1.first == 0) {

			if(move1.second == 0) bl->addFront(false);
			else bl->addFront(true);

		} else {

			if(move1.second == 0) bl->addEnd(false);
			else bl->addEnd(true);

		}		
		if(p1->hasWon(bl)) {std::cout << "Player 1 has won." << std::endl; break;}
		std::cout << std::endl << "Current string: " << bl->print() << std::endl;


	}

	std::cout << "Final string: " << bl->print() << std::endl;

	delete bl;
	delete p0;
	delete p1;

}