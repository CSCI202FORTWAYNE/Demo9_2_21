#include "unorderedLinkedList.h"
#include "circle.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a;
	unorderedLinkedList<circle> list;
	list.print();
	
	for(a = 0; a < 15; a++)
	{
		circle *c = new circle(rand() % 15 + 1);
		
		list.insertFirst(*c);
		delete c;
		//cout << endl;
	}
	
	list.print();
	
	
	cout << "Enter a number to delete from the list: ";
	cin >> a;
	cout << endl;
	
	list.deleteNode(a);
	list.print();
	
	
	
	return 0;
}
