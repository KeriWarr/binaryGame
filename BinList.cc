#include "BinList.h"

BinList::BinList() : length(0), num0(0), num1(0), first(NULL), last(NULL) {}

BinList::~BinList() {

	if(first) {

		BinNode *head = first->getNext();
		delete first;

		while(head) {

			BinNode *temp = head->getNext();
			delete head;
			head = temp;

		}

	}

}

int BinList::getLength() const {return this->length;}

int BinList::getNum0() const {return this->num0;}

int BinList::getNum1() const {return this->num1;}

BinNode *BinList::getFirst() const {return this->first;}

BinNode *BinList::getLast() const {return this->last;}

BinNode *BinList::getNode(int n) const {

	if(n == 0) return this->first;
	else if (n == this->length-1) return this->last;
	else if (n > 0 && n < this->length-1) {

		BinNode *head = first->getNext();

		while(head) {

			if(n == 1) {

				return head;

			} else {

				n--;
				head = head->getNext();

			}

		}

	}

	return NULL;

}

bool BinList::add(bool val) {

	if (first == NULL && last == NULL) {

		this->first = new BinNode(val,NULL,NULL);
		this->last = first;
		this->length++;
		if(val) this->num1++;
		else this->num0++;
		return true;

	} else {

		return false;

	}

}

bool BinList::addFront(bool val) {

	if(this->first == NULL) {

		return this->add(val);

	} else {

		this->first = new BinNode(val,this->first,NULL);
		this->first->getNext()->setPrev(this->first);
		this->length++;
		if(val) this->num1++;
		else this->num0++;		

	}

	return true;

}

bool BinList::addEnd(bool val) {

	if(this->last == NULL) {

		return this->add(val);

	} else {

		this->last = new BinNode(val,NULL,this->last);
		this->last->getPrev()->setNext(this->last);
		this->length++;
		if(val) this->num1++;
		else this->num0++;

	}

	return true;

}

bool BinList::hasSubString(std::vector<bool> subString) const {

	for(int i = 0; i < (this->length - (int)subString.size() + 1); ++i) {

		bool equal = true;

		for(int j = 0; j < subString.size(); ++j) {
			
			if(this->getNode(i+j)->getVal() != subString[j]) equal = false;

		}

		if(equal) return true;

	}

	return false;

}

bool BinList::hasSubString(std::vector<bool> subString, bool initial) const {

	if(subString.size() > this->length) return false;

	bool equal = true;

	if(initial) {

		for(int i = 0; i < subString.size(); ++i) {

			if(this->getNode(i)->getVal() != subString[i]) equal = false;

		}	

	} else {

		for(int i = this->length-subString.size(); i < this->length; ++i) {
			
			if(this->getNode(i)->getVal() != subString[i]) equal = false;
			
		}	

	}

	if(equal) return true;
	return false;

}

int BinList::subStringOf(std::vector<bool> str) const {

	if(this->length > str.size()) return -1;

	for(int i = 0; i < str.size()-this->length+1; ++i) {
	
		bool equal = true;

		for(int j = 0; j < this->length; ++j) {
		
			if(this->getNode(j)->getVal() != str[i+j]) equal = false;
			
		}

		if(equal) return i;
		
	}

	return -1;

}

std::string BinList::print() const {

	std::string str = "";
	BinNode* head = this->first;

	while(head) {

		if(head->getVal()) str += '1';
		else str += '0';
		head = head->getNext();

	}

	return str;

}

