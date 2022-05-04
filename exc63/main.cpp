#include<iostream>
#include<cmath>
#include "loan.h"
using namespace std;

int main( )
{

    //declare variables ADT Loan
    Loan loan1,loan2,loan_sum;

    //setter class function for the loan1 object
    loan1.set( );

    //displays the input values of the setter function
    loan1.display();

    //calculates and display the monthly payment
    loan1.payment();

    //setter class function for the loan2 object
    loan2.set( );

    //displays the input values of the setter function
    loan2.display();

    //calculates and display the monthly payment
    loan2.payment();

    //class function that takes two objects to sum their monthly payments
    loan_sum.add_loans(loan1,loan2);


    return 0;
}
