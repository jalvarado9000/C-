#ifndef INTSLLIST_H
#define INTSLLIST_H


/**********************
COMP315L - Analysis and Design of Data Structures and Algorithms Laboratory
Singly linked List
This class implements the singly linked list using templates
Each list has two attributes:
	-head: first node in the list
	-tail: last node in the list

Considerations:
1. head and tail point to null in an empty list
2. tail->next = null
******************/

#include "IntSLLNode.h"

template <class T>
class IntSLList{
public:
	//Default constructor: creates an empty list
	IntSLList();

	//Destructor: deallocate memory
	~IntSLList();

	//addToHead(T val): creates a new node with val as info,
	//and this new node is the new head
	void addToHead(T val);

	//addToTail(T val): creates a new node with val as info,
	//and this new node is the new tail
	void addToTail(T val);

	//deleteFromHead: remove head from the list,
	//the new head is the previous head->next
	//if the list had only one node, head and tail point null
	void deleteFromHead();

	//deleteFromTail: remove tail from the list,
	//the new tail is the previous node to tail
	//if the list had only one node, head and tail point null
	void deleteFromTail();

	//If the list is empty, returns true
	//otherwise, returns false
	bool isEmpty();

	//printList(): prints all nodes in the list
	void printList();
private:
	IntSLLNode<T> *head; //A pointer to the first node
	IntSLLNode<T> *tail; //A pointer to the last node
};





#endif // INTSLLIST_H
