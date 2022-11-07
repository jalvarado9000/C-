#include "loan.h"
#include <iostream>
#include <cmath>
using namespace std;

Loan::Loan(int i,float a,float r, float t)
{
       ID = i;
       amount = a;
       rate = r;
       term = t;
}

Loan :: Loan(){}

float Loan:: payment()
{
      rate = rate/1200;  // To convert % yearly rate to monthly fraction
      monthly_payment = amount*rate*(  pow( (rate+1), term)/ (pow( (rate+1), term) - 1) );
      cout << "montly payment = " << monthly_payment << endl;
}

Loan Loan :: add_loans(Loan loan1, Loan loan2){
cout << "estoy en la funcion" << endl;
cout << loan1.monthly_payment + loan2.monthly_payment;

}

