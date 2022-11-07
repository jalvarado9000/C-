#include <iostream>
#include "dynintqueue.h"

using namespace std;




 int main()
 {
     const int MAX_VALUES = 5;

DynIntQueue iQueue;

int num;
 // Enqueue a series of numbers.
 cout << "Enqueuing " << MAX_VALUES << " items...\n";
 for (int x = 0; x < 5; x++){
cout << "enter a number" << endl;
cin >> num;
 iQueue.enqueue(num);
 }
 /*// Dequeue and retrieve all numbers in the queue
 cout << "The values in the queue were:\n";
 while (!iQueue.isEmpty())
 {
 int value;
 iQueue.dequeue(value);
 cout << value << endl;
 }*/

 iQueue.f_counter();

 return 0;
 }

