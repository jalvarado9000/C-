#include "intqueue.h"
#include <iostream>

using namespace std;

IntQueue::IntQueue(int s)
{
    queArray = new int[s];
    queSize = s;
    Front = -1;
    rear = -1;
    numItem =0;

}

IntQueue::~IntQueue()
{
    delete []queArray;
}


bool IntQueue:: isFull()
{
 bool status = false;
if(numItem < queSize)
    {
    status = false;
    }
else
    status = true;

    return status;
}


bool IntQueue:: isEmpty()
{
    bool status;

    if(numItem)
        status = false;

    else
        status = true;

    return status;

}

void IntQueue::enque(int num)
{
if(isFull())
    cout << "the queue is full" << endl;

else
    {
    rear = (rear + 1) % queSize;
    queArray[rear] = num;
    numItem++;

    }
}

void IntQueue::Deque(int& num)
{
if(isEmpty())
    {
    cout << "The queue is empty" << endl;
    }
else
    {
    Front = (Front + 1) % queSize;
    num = queArray[Front];
    numItem--;
    }
}

void IntQueue:: Clear()
{
Front = queSize -1;
rear = queSize -1;
numItem = 0;
}

int IntQueue:: getItem(){return numItem;}


