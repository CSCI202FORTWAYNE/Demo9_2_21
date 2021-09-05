#include "node.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}
int linkedList::getCount()
{
	return count;
}

void linkedList::insertFirst(int newData)
{
	node * newNode = new node();
	newNode->info = newData;
	if(head == nullptr)
	{
		head = newNode;
		tail = newNode;
		head->link = nullptr;
		tail->link = nullptr;
		count++;
	}
	else
	{
		newNode->link = head;
		head = newNode;
		count++;
	}
}

void linkedList::insertLast(int newData)
{
	node * newNode = new node();
	newNode->info = newData;
	if(head == nullptr)
	{
		head = newNode;
		tail = newNode;
		head->link = nullptr;
		tail->link = nullptr;
		count++;
	}
	else
	{
		tail->link = newNode;
		tail = newNode;
		tail->link = nullptr;
		count++;
	}
}

void linkedList::print()
{
	node * current;
	
	if(head == nullptr)
	{
		cout << "The list is empty. Nothing to print." << endl;
	}
	else
	{
		current = head;
		while(current != nullptr)
		{
			cout << current->info << " ";
			current = current->link;
		}
	}
}

void linkedList::insert(int newData)
{
	node *newNode = new node();
	newNode->info = newData;
	
	if(head == nullptr)
	{
		head = newNode;
		tail = newNode;
		head->link = nullptr;
		tail->link = nullptr;
		count++;
	}
	else
	{
		bool found = false;
		node *current;
		node *trailCurrent = nullptr;
		current = head;
		while(current != nullptr && !found)
		{
			if(current->info >= newData)
				found = true;
			else
			{
				trailCurrent = current;
				current = current->link;
			}
		}
		if(current == head)
		{
			newNode->link = head;
			head = newNode;
			count++;
		} 
		else
		{
			trailCurrent->link = newNode;
			newNode->link = current;
			if(current == nullptr)
				tail = newNode;
			count++;
		}
		
	}
}



















