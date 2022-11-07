#include<iostream>
#include<cstdlib>
#include<fstream>
#include "altmoney.h"
using namespace std;

int main( )
{

     AltMoney m1, m2, sum;

     //enter the first set of dollars and cents
     cout << "The first money is:";
     cin >>  m1;

     //enter the second set of dollars and cents
     cout << "The second money is:";
     cin >> m2;

     //sums the total amount
     sum = m1+m2;

     //displays the amount
     cout << "The sum is:";
     cout << sum;

     return 0;
}




