#include "stackint.h"
#include <iostream>

using namespace std;

StackInt::StackInt(int num)
{
   top = -1;
   ArraySize = new int[num];
   StackSize = num;
}

StackInt:: StackInt(const StackInt& obj)
{
if(obj.StackSize > 0)

    //create array

    ArraySize = new int[obj.StackSize];

else
    ArraySize = nullptr;

    //copy stack attribute
    StackSize = obj.StackSize;

    //copy the array

    for(int i = 0; i < StackSize; i++)
        ArraySize[i] = obj.ArraySize[i];

        top = obj.top;












}

StackInt::~StackInt()
{
    delete [] ArraySize;
}


        void StackInt:: pop(int& num)
        {

        if(isEmpty()){
            cout << "the stack is Empty" << endl;
        }

        else
            {
            num = ArraySize[top];
            top--;
            }

        }

        void StackInt:: push(int num)
        {
        if(isFull())
            {
            cout << "the stack is full" << endl;
            }
        else
            {
            top++;
            ArraySize[top] = num;

            }

        }

        bool StackInt:: isFull()
        {
        bool status;

        if(top == StackSize -1)
        status = true;

        else
            status = false;

            return status;
        }


        bool StackInt:: isEmpty()
        {
        bool status;
        if(top == -1)
            status = true;

        else
            status = false;

        return status;



        }



        void StackInt:: multiply(int& num)
        {
        num = ArraySize[0] * ArraySize[1];

        }
        void StackInt:: resta(int& num)
        {
        num = ArraySize[1] - ArraySize[2];
        }
        void StackInt:: sum(int& num)
        {

        num = ArraySize[0] + ArraySize[1];
        }
