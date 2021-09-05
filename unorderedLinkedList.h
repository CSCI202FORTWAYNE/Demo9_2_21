#ifndef UNORDERED_H
#define UNORDERED_H
#include "linkedList.h"

template <class T>
class unorderedLinkedList: public linkedList<T>
{
	public:
		bool search(const T& searchItem) const;
		void insertFirst(const T& newData);
		void insertLast(const T& newData);
		void deleteNode(const T& deleteItem);
	
};

template <class T>
bool unorderedLinkedList<T>::search(const T& searchItem) const
{
	node<T> *current;
	bool found = false;
	current = this->head;
	while(current != nullptr && !found)
	{
		if(current->info == searchItem)
			found = true;
		else 
			current = current->link;
	}
	return found;
}

template <class T>
void unorderedLinkedList<T>::insertFirst(const T& newData)
{
	node<T> *newNode;
	newNode = new node<T>;
	newNode->info = newData;
	newNode->link = this->head;
	this->head = newNode;
	this->count++;
	if(this->tail == nullptr)
		this->tail = newNode;
}

template <class T>
void unorderedLinkedList<T>::insertLast(const T& newData)
{
	node<T> *newNode;
	newNode = new node<T>;
	newNode->info = newData;
	if(this->isEmptyList())
	{
		this->head = newNode;
		this->tail = newNode;
		this->count++;
	}
	else
	{
		this->tail->link = newNode;
		this->tail = newNode;
		this->count++;
	}
}

template <class T>
void unorderedLinkedList<T>::deleteNode(const T& deleteItem)
{
	node<T> *current;
	node<T> *trailCurrent;
	bool found;
	if(this->isEmptyList())
	{
		cout << "Cannot delete from an empty list" << endl;
	}
	else
	{
		if(this->head->info == deleteItem)
		{
			current = this->head;
			this->head = this->head->link;
			this->count--;
			if(this->head == nullptr)
				this->tail = nullptr;
				
			delete current;
		}
		else 
		{
			found = false;
			trailCurrent = this->head;
			current = this->head->link;
			
			while(current != nullptr && !found)
			{
				if(current->info != deleteItem)
				{
					trailCurrent = current;
					current = current->link;
				}
				else 
				{
					found = true;
				}
			}
			if(found)
			{
				trailCurrent->link = current->link;
				this->count--;
				if(this->tail == current)
					this->tail = trailCurrent;
				delete current;
			}
			else
			{
				cout << "The item to be deleted is not in the list." << endl;
			}
		}
	}
}















#endif