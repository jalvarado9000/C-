#include "listo.h"
#include <iostream>

using namespace std;

listo::listo()
{
 head = nullptr;

}


        void listo :: AddNode(int addData)
        {
        node* n = new node;
        n->data = addData;
        n->next = nullptr;

        if(head != nullptr)
            {
            curr = head;

            while(curr->next != nullptr )
                {

                curr = curr->next;
                }
                curr->next = n;
            }
        else
            {
            head = n;
            }
        }


        void listo :: DeleteNode(int delData)
        {

        node* delptr = nullptr;
        curr = head;
        temp = head;

        while(temp != nullptr && temp->data != delData)
        {
             curr = temp;
             temp = temp->next;

        }
            if(temp = nullptr)
                {
                cout << " the number "<< delData << " was not in the list" << endl;
                delete delptr;
                }
        else
            {
            delptr = temp;
            temp = temp->next;
            curr->next = temp;
            if(delptr == head)
                {
                head = head->next;
                temp = nullptr;
                }
            delete delptr;
            cout << "the value " << delData << " was deleted" << endl;
            }

        }
        void listo :: Print()
        {
        curr = head;
        while(curr != nullptr)
            {
            cout << "list: "<< curr->data << endl;
            curr = curr->next;
            }

        }
