#ifndef __BINNODE_H__
#define __BINNODE_H__

class BinNode {
	
		bool val;
		BinNode *next;
		BinNode *prev;

	public:

		BinNode(bool val, BinNode *next, BinNode *prev);

		//
		bool getVal() const;

		//
		BinNode *getNext() const;

		//
		BinNode *getPrev() const;

		//
		void setNext(BinNode *next);

		//
		void setPrev(BinNode *prev);

};

#endif