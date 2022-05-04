#ifndef NODE_H
#define NODE_H

template <class T>
class node{

    public:
    struct linked{


    T value;
    linked *next;

    linked(T v){
    value = v;
    next = nullptr;
    }

    linked(T v, linked* n ){
    value = v;
    next = n;
    }


    };
    linked *head;

    public:
    node(){head = nullptr;}

    void add(T num);
    //void l_insert(int num);
    void l_removee(T num);
    void display();


};



#endif // NODE_H
