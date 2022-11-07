#include "dynintqueue.h"

#include <iostream>

 using namespace std;


 DynIntQueue::DynIntQueue()
 {
 front = nullptr;
 rear = nullptr;
 head = nullptr;
 numItems = 0;
 counter = 0;
 }

 DynIntQueue::~DynIntQueue()
 {
 clear();
 }

 void DynIntQueue::enqueue(int num)
 {
 QueueNode *newNode = nullptr;

 // Create a new node and store num there.
 newNode = new QueueNode;
 newNode->value = num;
 newNode->next = nullptr;

 // Adjust front and rear as necessary.
 if (isEmpty())
 {
 front = newNode;
 rear = newNode;
 }
 else
 {
 rear->next = newNode;
 rear = newNode;
 }

 // Update numItems.
 numItems++;
 }

 void DynIntQueue::dequeue(int &num)
 {
 QueueNode *temp = nullptr;

 if (isEmpty())
 {
 cout << "The queue is empty.\n";
 }
 else
 {
 // Save the front node value in num.
 num = front->value;

 // Remove the front node and delete it.
 temp = front;
 front = front->next;
 delete temp;

 // Update numItems.
  numItems--;
 }
 }

 bool DynIntQueue::isEmpty() const
 {
 bool status;

 if (numItems > 0)
 status = false;
 else
    status = true;
 return status;
 }

 void DynIntQueue::clear()
 {
 int value; // Dummy variable for dequeue

 while(!isEmpty())
 dequeue(value);
 }

void DynIntQueue::f_counter()
{
if(isEmpty())
    {
    cout << "the queue is empty " << endl;

    }
    else
        {
        head = front;

        while(head!= nullptr)
            {
            if(head->value == front->value){
                counter++;
            }
            head = head->next;
            }
    cout << "the front number is repeated " << counter << " time" << endl;
        }

}
