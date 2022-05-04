#include <iostream>

using namespace std;

class nodes{
 public:

struct linked{

double value;
linked *next;
linked(double value1, linked *next1 = nullptr)
{

value = value1;
next = next1;

}

};

linked *head;
//linked *nodeptr;


    nodes(){head = nullptr;}
    ~nodes();
    void add(double number);
    void removee(double numnber);
    void displayList();



};


void nodes::add(double number){


if(head == nullptr) head = new linked(number);

else{
    linked *nodeptr = head;
    linked *nextNode;

    while(nodeptr->next != nullptr){
        nodeptr = nodeptr->next;
        nodeptr->next = new linked(number);
    }

}
}

void nodes::displayList(){

linked *temp;

temp = head;

while(temp != nullptr){
    cout << temp->value << endl;
   temp = temp->next;
}

}

nodes::~nodes(){

linked *temp = head;

while(temp != nullptr){

    linked *garbage = temp;

    temp = temp->next;

    delete garbage;
}


}

 void nodes::removee(double number){

 linked *nodeptr, *prev;

 if(head == nullptr)
    return;

 else if (head->value == number){
    nodeptr = head;
    head = head->next;
    delete nodeptr;
 }
    else{

        nodeptr = head;

        while(nodeptr != nullptr && nodeptr->value != number){

            prev = nodeptr;
            nodeptr = nodeptr->next;


        }
        if(nodeptr){

            prev->next = nodeptr->next;
            delete nodeptr;

        }

    }





 }



int main(){

nodes listo;

listo.add(2.5);
listo.add(7.90);
listo.add(12.6);

listo.displayList();






return 0;
}


