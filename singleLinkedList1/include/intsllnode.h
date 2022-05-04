#ifndef INTSLLNODE_H
#define INTSLLNODE_H

/**********************
COMP315L - Analysis and Design of Data Structures and Algorithms Laboratory
Singly linked node
This class implements the singly linked node using templates
Each nodes two attributes:
	-info: stores the actual value
	-next: a pointer to the next node in the list
******************/

#include <iostream>
using namespace std;

/**********************************
Class Declaration
***********************/
template <class T>
class IntSLLNode{
public:
	IntSLLNode(); //Default constructor
	IntSLLNode(T, IntSLLNode<T>*); //Special constructor
	T getInfo(); // getInfo
	IntSLLNode<T>* getNext(); // getNext
	void setInfo(T); // setInfo
	void setNext(IntSLLNode<T> *); // Set next

	T info; // Actual data
	IntSLLNode<T> *next; // Points to the next node in the list
};

#endif // INTSLLNODE_H
