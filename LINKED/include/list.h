#ifndef LIST_H
#define LIST_H


class List
{
    private:
   struct node
   {
   int data;
   node* next;

   };
   node* curr;
   node* temp;
   node* head;

   public:
   List();

   void AddNode(int AddData);
   void deleteNode(int delNode);
   void printList();


};

#endif // LIST_H
