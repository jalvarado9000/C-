/*#ifndef INTSTACK_H
#define INTSTACK_H


class IntStack
{

private:
    int *StackArray;
    int StackSize;
    int top;

public:
    IntStack(int num);
    ~IntStack();
    void push(int num);
    void pop(int& num);
    bool isFull();
    bool isEmpty();

};

#endif // INTSTACK_H
