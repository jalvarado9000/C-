/*#include "intstack.h"
#include <iostream>
using namespace std;

IntStack::IntStack(int num)
{
    StackArray = new int[num];
    top = -1;
    StackSize= num;

}

IntStack::~IntStack()
{
    delete []StackArray;
}

void IntStack::push(int num)
{
if(isFull())
    {
    cout << "cannot push another item, the stack is full" << endl;
    }

else
    {
    top++;
    StackArray[top] = num;
    }
}

void IntStack::pop(int& num)
{
if(isEmpty())
    {
    cout << "the stack is empty" << endl;
    }

else
    {

    num = StackArray[top];
    top--;
    }

}



bool IntStack::isFull()
{

bool status;

if(top == StackSize-1)
    {
    status = true;

    }
else
    status = false;

    return status;

}

bool IntStack::isEmpty()
{

bool status;
if(top == -1)
    status = true;
else
    status = false;

    return status;

}
