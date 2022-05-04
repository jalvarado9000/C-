// P81a.cpp - This program adds money of two different people
#include<iostream>
#include<cstdlib>
#include "altmoney.h"
using namespace std;


int main( )
{
     int d, c;
     AltMoney m1, m2, sum;
     sum = AltMoney(0,0);
     //set values for the object m1 of type AltMoney
     m1.read_money();
     cout << "The first money is:";
     //outputs the money inputed by the user
     m1.display_money();

     //set values for the object m2 of type AltMoney
     m2.read_money();

     cout << "The second money is:";
     //outputs the money inputed by the user
     m2.display_money();
     //sums the both object m1 and m2 into the object sum
     add(m1,m2, sum);

     cout << "The sum is:";
     //display the sum
     sum.display_money();

     //substract the both object m1 and m2 into the object sum
     substract(m1,m2, sum);
     cout << "The substraction is:";
     sum.display_money();


     return 0;
}


