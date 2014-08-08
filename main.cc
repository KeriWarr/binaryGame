#include "BinNode.h"
#include "BinList.h"
#include <iostream>

int main() {

	std::string in;
	BinList *bl = new BinList();

	while(std::cin >> in) {

		if(in == "L0" || in == "l0") bl->addFront(false);
		else if(in == "L1" || in == "l1") bl->addFront(true);
		else if(in == "R0" || in == "r0") bl->addEnd(false);
		else if(in == "R1" || in == "r1") bl->addEnd(true);
		else if(in == "p" || in == "P") std::cout << bl->print() << std::endl;
		else std::cout << "Invalid Input." << std::endl;

	}

	std::cout << bl->print() << std::endl;

	delete bl;

}