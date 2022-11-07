#ifndef LOAN_H
#define LOAN_H


class Loan  // Loan is called structure tag
{

   private:
       int ID;  // assume an unique integer between 1111-9999
       float amount; // $ amount of the loan
      float rate; // annual interest rate
      int term;  // number of months, length of the loan
      float monthly_payment;

      public:
         void set( );//setter
         float payment( );//calculate and displays the monthly payment value
         //void display( );//displays the
         Loan add_loans(Loan,Loan);//sums two object values
         Loan();//default constructor
         Loan(int,float,float,float);//constructor with arguments
 };


#endif // LOAN_H
