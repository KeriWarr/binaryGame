#include <iostream>
#include <utility>

#include "BinNode.h"
#include "BinList.h"
#include "Player.h"
#include "Human.h"
#include "RandMath.h"
#include "BinStrings.h"
#include "ComputerPlayer.h"

const int NUM_WINCONS = 9;
const int NUM_PLAYERS = 2;


int main() {

	BinList *bl = new BinList();

	int winCons[NUM_PLAYERS];
	Player **players = new Player*[NUM_PLAYERS];
	bool winConTaken[NUM_WINCONS];
	int winner = -1;

	for(int i = 0; i < NUM_WINCONS; ++i) winConTaken[i] = false;

	for(int i = 0; i < NUM_PLAYERS; ++i) {
	
		winCons[i] = RandMath::getRand(0, NUM_WINCONS-1-i);

		while(winConTaken[winCons[i]]) ++winCons[i];

		winConTaken[winCons[i]] = true;
		if(i) players[i] = new ComputerPlayer(winCons[i]);
		else {
			players[i] = new Human(winCons[i]);
			std::cout << "Player win condition: " << winCons[i];
			if(winCons[i] >= 0 && winCons[i] < BinStrings::NUM_STRING_SETS) std::cout << "Construct the following string: " << BinStrings::printSet(BinStrings::BIN_STRINGS[winCons[i]]) << std::endl;
			else if (winCons[i] == (0+BinStrings::NUM_STRING_SETS)) std::cout << "Have the string contain ten 0's" << std::endl;
			else if (winCons[i] == (1+BinStrings::NUM_STRING_SETS)) std::cout << "Have the string contain ten 1's" << std::endl;
		}
		
	}

	std::cout << std::endl << std::endl;

	while(!std::cin.eof()) {

		for(int i = 0; i < NUM_PLAYERS; ++i) {
		
			for(int j = 0; j < NUM_PLAYERS; ++j) {
			
				if(players[(j+i) % NUM_PLAYERS]->hasWon(bl)) {
					std::cout << "Player " << (j+i) % NUM_PLAYERS << " has Won!" << std::endl;
					winner = j;
					break;
				}
				
			}

			if(winner != -1) break;

			std::cout << "Current String: " << bl->print() << std::endl;

			if(players[i]->isHuman()) std::cout << "Player " << i << ", ";
			else std::cout << "Computer player " << i << " is making a move." << std::endl;

			std::pair<bool,bool> *move = players[i]->makeMove(bl);
			if(!move) break;

			if(move->first == 0) {
				if(move->second == 0) bl->addFront(false);			
				else bl->addFront(true);
			} else {
				if(move->second == 0) bl->addEnd(false);			
				else bl->addEnd(true);
			}			
			
			delete move;

			std::cout << std::endl << std::endl;

		}

		if(winner != -1) break;

	}


	std::cout << "Final string: " << bl->print() << std::endl;


	for(int i = 0; i < NUM_PLAYERS; ++i) delete players[i];
	delete bl;

}
