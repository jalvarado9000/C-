#include "list.h"
#include <cstdlib>
#include  <iostream>
using namespace std;



List :: List()
{
temp = nullptr;
head = nullptr;
curr = nullptr
}

void List::AddNode(int AddData)
{
node* n = new node;
n->next = nullptr;
n->data = AddData;

if(head != nullptr)
    {
        curr = head;
        while(curr->next != nullptr)
            {
            curr = curr->next;
            }
            curr->next = n;


else
    {
    head = n;


    }











    }


}
   void deleteNode(int delNode);
   void printList();

