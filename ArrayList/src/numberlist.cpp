#include "numberlist.h"
#include <iostream>
using namespace std;
NumberList head = nullptr;

void NumberList::appendNode(double num)
 {
head = nullptr;
 ListNode *newNode; // To point to a new node
 ListNode *nodePtr; // To move through the list

 // Allocate a new node and store num there.
 newNode = new ListNode;
 newNode->value = num;
 newNode->next = nullptr;

 // If there are no nodes in the list
 // make newNode the first node.

 if (!head)
 head = newNode;
 else // Otherwise, insert newNode at end.
 {
 // Initialize nodePtr to head of list.
 nodePtr = head;

 // Find the last node in the list.
 while (nodePtr->next)
 nodePtr = nodePtr->next;

 // Insert newNode as the last node.
 nodePtr->next = newNode;
 }
 }

 void NumberList::displayList() const
 {
 ListNode *nodePtr; // To move through the list

 // Position nodePtr at the head of the list.
 nodePtr = head;

 // While nodePtr points to a node, traverse
 // the list.
 while (nodePtr)
 {
 // Display the value in this node.
 cout << nodePtr->value << endl;

 // Move to the next node.
 nodePtr = nodePtr->next;
 }
 }
