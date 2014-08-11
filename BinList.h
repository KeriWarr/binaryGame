#ifndef __BINLIST_H__
#define __BINLIST_H__

#include <string>
#include <iostream>
#include <vector>

#include "BinNode.h"


class BinList {
	
		int length;
		int num0;
		int num1;

		BinNode *first;
		BinNode *last;

	public:

		// constructor	
		BinList();

		// destructor
		~BinList();

		// returns this->length
		int getLength() const;

		// ..
		int getNum0() const;

		// ..
		int getNum1() const;

		// ..
		BinNode *getFirst() const;

		// ..
		BinNode *getLast() const;

		// reutrns the nth element in the linked list
		//  if n is an invalid index, returns NULL
		BinNode *getNode(int n) const;

		// adds an element with val = val to the list if it is currently empty.
		//  returns false if the list is not empty, or the addition is 
		//  unsuccessful
		bool add(bool val);

		// adds a BinNode with val = val to the front of the list
		bool addFront(bool val);

		// adds a BinNode with val = val to the end of the list
		bool addEnd(bool val);

		// returns true if the the list contains the given substring
		//
		// when compiled with g++ using the -std=c++11 option, 
		//  this can be called with the following format:
		//  BinList_ptr->hasSubString({0,1,0,0,1,1});
		bool hasSubString(std::vector<bool> subString) const;

		// only checks for initial XOR terminal substring
		bool hasSubString(std::vector<bool> subString, bool initial) const;

		// -1 means false;
		// otherwise, returns start position of bl in str
		int subStringOf(std::vector<bool> str) const;

		// returns a string of 0's and 1's
		//  example: "001110"
		std::string print() const;

};

#endif
