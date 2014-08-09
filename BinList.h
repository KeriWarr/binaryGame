#ifndef __BINLIST_H__
#define __BINLIST_H__
#include "BinNode.h"
#include <string>
#include <iostream>
#include <vector>

class BinList {
	
		int length;
		int num0;
		int num1;

		BinNode *first;
		BinNode *last;

	public:

		//
		BinList();

		//
		~BinList();

		//
		int getLength() const;

		//
		int getNum0() const;

		//
		int getNum1() const;

		//
		BinNode *getFirst() const;

		//
		BinNode *getLast() const;

		//
		BinNode *getNode(int n) const;

		//
		bool add(bool val);

		//
		bool addFront(bool val);

		//
		bool addEnd(bool val);

		//
		bool hasSubString(std::vector<bool> subString);

		//
		std::string print();

};

#endif