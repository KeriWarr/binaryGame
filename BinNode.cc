#include "BinNode.h"


BinNode::BinNode(bool val, BinNode *next, BinNode *prev) 
	: val(val), next(next), prev(prev) {}

bool BinNode::getVal() const {return this->val;}

BinNode *BinNode::getNext() const {return this->next;}

BinNode *BinNode::getPrev() const {return this->prev;}

void BinNode::setNext(BinNode *next) {this->next = next;}

void BinNode::setPrev(BinNode *prev) {this->prev = prev;}

 
