#ifndef __BINSTRINGS_H__
#define __BINSTRINGS_H__ 

#include <vector>
#include <string>

#include <iostream>

// first interpretation of an abstract win condition class

class BinStrings {

	public:

		static const int NUM_STRING_SETS;

		static const int NUM_OTHER_WINCONS;

		static const std::vector<std::vector<std::vector<bool>>> BIN_STRINGS;

		static std::string print(std::vector<bool> str);

		static std::string printSet(std::vector<std::vector<bool>> set);

};

#endif
