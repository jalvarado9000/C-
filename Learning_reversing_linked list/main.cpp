#include <iostream>

using namespace std;

struct node
{
int data;
node* next;
node* prev;
};
void Print(node* head);
void Print2(node* tail);

int main()
{

 node* head;
 node* n;
 node* tail;

 n = new node;
 n->prev = nullptr;
 n->data = 1;
 tail = n;
 head = n;

 n = new node;
 n->data = 2;
 n->prev = tail;
 tail->next = n;
 tail = n;

 n = new node;
 n->data = 3;
 n->prev = tail;
 tail->next = n;
 tail = n;
 n->next = nullptr;


 Print(head);
 Print2(tail);




    return 0;
}

void Print(node* head)
{
node* temp = head;

while(temp!= nullptr)
    {


    cout << temp->data << endl;
    temp = temp->next;
    }



}

void Print2(node* tail)
{
node* temp = tail;

while(temp!= nullptr)
    {


    cout << temp->data << endl;
    temp = temp->prev;
    }



}
