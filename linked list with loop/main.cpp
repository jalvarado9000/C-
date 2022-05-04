#include <iostream>

using namespace std;

struct node
{
int data;
node* prev;
node* next;
};

int main()
{

    node* head;
    node* tail;

    node* n;
    node* t = n;

    n = new node;
    n->data = 1;
    n->prev = nullptr;
    tail = n;
    head =n;


    for(int i = 2; i < 10; i++ )
        {
        n = new node;
        n->data = i;
        cout << n->data << endl;
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


    return 0;
}
