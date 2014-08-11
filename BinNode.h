#ifndef __BINNODE_H__
#define __BINNODE_H__


class BinNode {
	
		bool val;
		BinNode *next;
		BinNode *prev;

	public:

		// constructor!
		BinNode(bool val, BinNode *next, BinNode *prev);

		// returns this->val
		bool getVal() const;

		// you guessed it
		BinNode *getNext() const;

		// ..
		BinNode *getPrev() const;

		// sets this->next to next
		// assumes stuff is being freed as appropriate
		void setNext(BinNode *next);

		// ..
		void setPrev(BinNode *prev);

};

#endif
