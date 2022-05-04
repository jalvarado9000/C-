#include "node.h"
#include <iostream>
#include <string>

using namespace std;



template <class T>
void node<T>::add(T num){

if(head == nullptr || head->value >= num){
  head = new linked(num, head);
}

else{



    linked *new_node = head;
    linked *ptr = head->next;

    while(ptr->next != nullptr && ptr->value < num){
        new_node = ptr;
        ptr = ptr->next;
    }



new_node->next = new linked(num, ptr);
}

}

template <class T>
void node<T>::display(){


linked *show = head;

while(show != nullptr){

    cout << show->value << endl;
    show = show->next;

}

}

template <class T>
void node<T>::l_removee(T num){
linked *nodeptr, *prev;

if(head == nullptr) return;

if(head->value == num){
    nodeptr = head;
    head = head->next;
    delete nodeptr;
}

else{

    nodeptr = head->next;
    prev = head;

    while(nodeptr != nullptr && nodeptr->value != num){

        prev = nodeptr;
       nodeptr = nodeptr->next;



    }

    if(nodeptr){
    prev->next = nodeptr->next;
    delete nodeptr;
    }

}

}









