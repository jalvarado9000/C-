#ifndef STACKINT_H
#define STACKINT_H


class StackInt
{
    private:
       int top;
      int StackSize;
    int *ArraySize;


    public:
        StackInt(int num);
        StackInt(const StackInt& obj);
        ~StackInt();
        void pop(int& num);
        void push(int num);
        bool isFull();
        bool isEmpty();

        void multiply(int& num);
        void resta(int& num);
        void sum(int& num);




};

#endif // STACKINT_H
