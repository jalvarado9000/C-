#ifndef LISTO_H
#define LISTO_H


class listo
{
    private:

        struct node
        {
        int data;
        node* next;
        };

        node* curr;
        node* head;
        node* temp;

    public:

        listo();
        void Print();
        void AddNode(int addData);
        void DeleteNode(int delData);

};

#endif // LISTO_H
