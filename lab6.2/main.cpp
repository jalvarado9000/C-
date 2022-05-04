#include<iostream>
#include<cmath>
#include "loan.h"
using namespace std;

int main( )
{

    Loan loan1;
    //setter class function that takes user inputs
    loan1.set( );

    //displays the user inputs
    loan1.display();

    //calculate and displays the user monthly payment
    cout << loan1.payment() << endl;

    return 0;
}

