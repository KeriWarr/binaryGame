#ifndef __BINSTRINGS_H__
#define __BINSTRINGS_H__ 

#include <vector>
#include <string>

#include <iostream>

// first interpretation of an abstract win condition class

class BinStrings {

	public:

		// should probably be reomved
		static const int NUM_STRING_SETS;

		// there are currently 2 win conditions which cannot be described in 
		//  terms of of strings. 
		static const int NUM_OTHER_WINCONS;

		// each element is a set of strings, any will satisfy the win consition
		static const std::vector<std::vector<std::vector<bool>>> BIN_STRINGS;

		// ..
		static std::string print(std::vector<bool> str);

		// ..
		static std::string printSet(std::vector<std::vector<bool>> set);

};

#endif
