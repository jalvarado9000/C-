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
         void set( );//setter function
         float payment( );//calculates the monthly payment
         void display( );//display the input values of the setter
         Loan add_loans(Loan,Loan);//class function that takes two objects to sum their monthly payments
 };


#endif // LOAN_H
