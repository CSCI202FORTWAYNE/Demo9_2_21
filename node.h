#ifndef NODE_H
#define NODE_H

struct node
{
	int info;
	node *link;
};

class linkedList 
{
	public:
		linkedList();
		int getCount();
		void insertFirst(int);
		void insertLast(int);
		void print();
		void insert(int);
	private:
		node *head;
		node * tail;
		int count;
	
};

#endif