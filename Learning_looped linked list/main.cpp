#include <iostream>

using namespace std;


struct node
{
int data;
node* next;
node* prev;

};
void Recursion(node* ptr, int searchva);
int main()
{
    node* n;
    node* tail;
    node* head;
    node* t;
    node* temp;


    n = new node;
    n->data = 1;
    n->prev = nullptr;
    tail = n;
    head = n;


    for(int i = 2; i < 10; i++)
        {
        n = new node;
        n->data = i;
        n->prev = tail;
        tail->next = n;
        tail = n;
        }
    n->next = nullptr;

    t = head;

    while(t != nullptr)
    {
       cout << t->data << endl;
       t = t->next;
    }

    t = tail;

    while(t != nullptr)
    {
        cout << t->data << endl;
        t = t->prev;
    }

    Recursion(head,5 );
     Recursion(head,69 );









    return 0;
}

 void Recursion(node* ptr,int  searchva)
 {
 if(ptr == nullptr)
    {
    cout << searchva << " was not found" << endl;
    }
else if(ptr->data == searchva)
    {
    cout << "the value " << searchva << " is in the list" << endl;
    }

else
    Recursion(ptr->next, searchva);

 }
