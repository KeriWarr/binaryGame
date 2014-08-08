#ifndef __BINLIST_H__
#define __BINLIST_H__
#include "BinNode.h"
#include <string>
#include <iostream>

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
		bool add(bool val);

		//
		bool addFront(bool val);

		//
		bool addEnd(bool val);

		//
		std::string print();

};

#endif