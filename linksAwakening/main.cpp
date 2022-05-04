#include <iostream>

using namespace std;

struct node
{
int data;
node* next;
node* prev;
};

node* temp;
node* head;
node* curr;
node* n;

int main()
{

   n = new node;
   n->data =1;
   head = n;
   curr = n;



   n = new node;
   n->data = 2;
   n->prev = curr;
   curr->next = n;

   curr = curr->next;

    n = new node;
   n->data = 3;
   n->prev = curr;
   curr->next = n;
   curr = curr->next;

    n = new node;
   n->data = 4;
   n->prev = curr;
   curr->next = n;
   curr = curr->next;
   n->next = head;
   head->prev = n;

    temp = head;




        while(curr->prev != curr->next) {


        cout << curr->data << endl;
            curr = curr->prev;
        }







return 0;


}
