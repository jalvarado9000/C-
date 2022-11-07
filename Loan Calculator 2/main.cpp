#include<iostream>
#include<cmath>
#include "loan.h"
using namespace std;

int main( )
{


      int id;
      float amount, rate, term;

      //ask the user to input values for the first loan
      cout << "Enter the ID of this loan \n";
      cin >> id;
      cout << "Enter the amount of this loan \n";
      cin >> amount;
      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> rate;
      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> term;

    //passes the user input values to the Loan class constructor to create the loan1 object
    Loan loan1(id,amount,rate,term);

    //calculate and displays the monthly payment
    loan1.payment();


      //ask the user to input values for the second loan
      cout << "Enter the ID of this loan \n";
      cin >> id;
      cout << "Enter the amount of this loan \n";
      cin >> amount;
      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> rate;
      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> term;

    //passes the user input values to the Loan class constructor to create the loan2 object
    Loan loan2(id,amount,rate,term);

    //calculate and displays the monthly payment
    loan2.payment();

    //declaration of a new object
    Loan loan_sum;

    //sum the monthly payments of both loan 1 and loan 2
    loan_sum.add_loans(loan1,loan2);


    return 0;
}


