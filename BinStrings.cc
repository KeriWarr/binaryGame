#include "BinStrings.h"


const int BinStrings::NUM_STRING_SETS = 7;

const int BinStrings::NUM_OTHER_WINCONS = 2;

const std::vector<std::vector<std::vector<bool>>> BinStrings::BIN_STRINGS = {

	{{0,1,1,0,0,0}},
	{{1,0,0,1,1,1}},
	{{0,0,0,1,1,0}},
	{{1,1,1,0,0,1}},
	{{0,0,0,0,0}},
	{{1,1,1,1,1}},
	{{0,1,0,1,0,1,0},{1,0,1,0,1,0,1}},

};

std::string BinStrings::print(std::vector<bool> str) {

	std::string ret = "";

	for(int i = 0; i < str.size(); ++i) {
		ret += str[i] ? '1' : '0';
		
	}

	return ret;

}

std::string BinStrings::printSet(std::vector<std::vector<bool>> set) {

	std::string ret = "";

	for(int i = 0; i < set.size(); ++i) {
		ret += BinStrings::print(set[i]);
		if(i != set.size()-1) ret += " OR ";
		
	}

	return ret;

}
