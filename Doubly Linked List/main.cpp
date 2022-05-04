#include <iostream>
#include <cstdlib>

using namespace std;

struct node
    {
    int data;
    node* prev;
    node* next;

    };

    void PrintFoward(node* head);

int main()
{



    node* head;
    node* tail;
    node* n;


   n = new node;
   n->data = 20;
   n->prev = nullptr;
   head = n;
   tail =n;


   n = new node;
   n->data = 19;
   n->prev = tail;
   tail->next = n;
   tail = n;



   n = new node;
   n->data = 18;
   n->prev = tail;
   tail->next = n;
   tail = n;

    n = new node;
    n->data = 17;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 16;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 15;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 14;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 13;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n =new node;
    n->data = 12;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 11;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 10;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 9;
    n->prev = tail;
    tail->next = n;
    tail = n;
    tail->next = nullptr;

    PrintFoward(head);
    return 0;
}



void PrintFoward(node* head)
{
node* temp = head;

while(temp != nullptr)
    {
    cout << temp->data << endl;
    temp = temp->next;
    cout << endl;
    }

}
