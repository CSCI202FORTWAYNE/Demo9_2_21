all: linkedList.h unorderedLinkedList.h linkedListIterator.h circle.o
	g++ -pedantic-errors main.cpp circle.o
circle.o: circle.cpp circle.h
	g++ -pedantic-errors -c circle.cpp
clean:
	rm a.out
	rm circle.o