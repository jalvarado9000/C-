#ifndef INTQUEUE_H
#define INTQUEUE_H


class IntQueue
{

private:
    int* queArray;
    int queSize;
    int Front;
    int rear;
    int numItem;

public:
    IntQueue(int);
    ~IntQueue();
    bool isEmpty();
    bool isFull();
    void enque(int);
    void Deque(int&);
    void Clear();
    int getItem();




};

#endif // INTQUEUE_H
