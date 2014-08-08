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

	}

	return true;

}

bool BinList::addEnd(bool val) {

	if(this->last == NULL) {

		return this->add(val);

	} else {

		this->last = new BinNode(val,NULL,this->last);
		this->last->getPrev()->setNext(this->last);

	}

	return true;

}

std::string BinList::print() {

	std::string str = "";
	BinNode* head = this->first;

	while(head) {

		if(head->getVal()) str += '1';
		else str += '0';
		head = head->getNext();

	}

	return str;

}