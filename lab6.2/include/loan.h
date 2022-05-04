#ifndef LOAN_H
#define LOAN_H


class Loan  // Loan is called structure tag
{

   private:
       int ID;  // assume an unique integer between 1111-9999
       float amount; // $ amount of the loan
      float rate; // annual interest rate
      int term;  // number of months, length of the loan

      public:
         void set( );//set the id, amount, rate, term values
         float payment( );//calculate and display the monthly payment
         void display( );//outputs the id, amount, rate, term values given by the user
 };


#endif // LOAN_H
