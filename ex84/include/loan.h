#ifndef LOAN_H
#define LOAN_H

#include <iostream>
#include <string>
using namespace std;

class ID
{
    public:
        ID( );
        ID(int, int, int);
        void display();
        int get_left();
        int get_right();
        int get_middle();

    private:
        int left;
        int middle;
        int right;

};

class Loan  // Loan is called structure tag
{
    public:
         Loan( );
         Loan(ID id, float amount, float rate, int term);
         friend bool operator == (Loan loan1, Loan loan2);
         void set( );
         float payment( );
         void display( );
   private:
       ID id;  // assume an unique integer between 1111-9999
       float amount; // $ amount of the loan
      float rate; // annual interest rate
      int term;  // number of months, length of the loan
 };



#endif // LOAN_H
