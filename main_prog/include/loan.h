#ifndef LOAN_H
#define LOAN_H

#include <iostream>
#include "id.h"
#include "loan.h"
using namespace std;
// This part will go to Loan.h file
class Loan  // Loan class definition
{
   public:
     Loan( );
     Loan(ID id, float amount, float rate, int term);
     void set( );
     float payment( );
     void display( );
   private:
      ID id;  // assume an unique integer in three integer parts
      float amount; // $ amount of the loan
      float rate; // annual interest rate
      int term;  // number of months, length of the loan
 };

#endif // LOAN_H
