#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H


class DynIntQueue
 {
private:
// Structure for the queue nodes
struct QueueNode
{ int value; // Value in a node
 QueueNode *next; // Pointer to the next node
 };

 QueueNode *front; // The front of the queue
 QueueNode *rear; // The rear of the queue
 QueueNode *head;
 int numItems; // Number of items in the queue
 int counter;
 public:
 // Constructor
 DynIntQueue();

 // Destructor
 ~DynIntQueue();

 void enqueue(int);
 void dequeue(int &);
 bool isEmpty() const;
 bool isFull() const;
 void clear();
 void f_counter();
 };


#endif // DYNINTQUEUE_H
