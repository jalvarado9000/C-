#include "IntSLList.h"
#include "intsllnode.h"
#include <iostream>

/****************
	Default constructor: creates an empty list
	head and tail point null
*****************/
template <class T>
IntSLList<T>::IntSLList()
{
	tail = head = 0;
}

/***********************
	Destructor: deallocate memory removing each node from the list
*****************/
template <class T>
IntSLList<T>::~IntSLList()
{

	IntSLLNode<T> *prtNode;

	prtNode = head;


	while(prtNode != 0)
	{

		prtNode = head->getNext();


		delete head;


		head = prtNode;
	}
}

/***********************
	printList(): prints all nodes in the list
*****************/
template <class T>
void IntSLList<T>::printList()
{
	IntSLLNode<T>* prtNode;
	prtNode = head;
	while (prtNode != 0)
	{
		cout << prtNode->getInfo() << " ";
		prtNode = prtNode->getNext();
	}
}

/***********************
	If the list is empty, returns true
	otherwise, returns false
*****************/
template <class T>
bool IntSLList<T>::isEmpty()
{
	bool res;
	res = false;
	if (head == 0)
	{
		res = true;
	}

	return res;
}

/***********************
	Implement other methods
***********************/

template <class T>
void IntSLList<T>::addToHead(T val)
{
    head = new IntSLLNode<T>(val,head);
if (tail == nullptr)
tail = head;

}

template <class T>
void IntSLList<T>::addToTail(T val)
{

   if(head == nullptr)
    head = tail = new IntSLLNode<T>(val, nullptr);

    else{

  tail->next = new IntSLLNode<T>(val, nullptr);
  tail = tail->next;


    }


}


template <class T>
void IntSLList<T>::deleteFromHead()
{

if(head){

IntSLLNode <T>*nodeptr = head;
head = head->next;
delete nodeptr;

while(nodeptr->next != nullptr){

cout << nodeptr->info << " ";
nodeptr = nodeptr->next;

}

}

}

template <class T>
void IntSLList<T>::deleteFromTail()
{


if (head == tail) {

delete head;
head = tail = 0;
}

else {
IntSLLNode <T>*tmp;
for (tmp = head; tmp->next != tail; tmp = tmp->next);
delete tail;
tail = tmp;
tail->next = 0;
}



}

template class IntSLList<int>;

