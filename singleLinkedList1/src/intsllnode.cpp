#include "IntSLList.h"
#include "intsllnode.h"
#include <iostream>

/*****
	Default constructor
	Creates a empty node
*****/
template <class T>
IntSLLNode<T>::IntSLLNode()
	{ next = 0; }

/******
	Special constructor:
	Creates a node with value i in the info attribute and next pointing to null
	@params:
		i: actual value to be stored
		*n: pointer to the next node
*******/
template <class T>
IntSLLNode<T>::IntSLLNode(T i, IntSLLNode<T> *n)
 {	info = i;
	next = n; }

/********
	getInfo
	returns the info value
*********/
template <class T>
T IntSLLNode<T>::getInfo()
	{ return info; }

/********
	getNext
	returns a point to next node the list
**********/
template <class T>
IntSLLNode<T> *IntSLLNode<T>::getNext()
	{ return next; }

/********
	setInfo
	Set i as the node info
*******/
template <class T>
void IntSLLNode<T>::setInfo(T i)
	{ info = i; }

/********
	setNext
	Points next attribute to the next list node
********/
template <class T>
void IntSLLNode<T>::setNext(IntSLLNode<T> *n)
	{ next = n; }


	template class IntSLLNode<int>;

