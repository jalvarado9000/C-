#include "altmoney.h"

#include<iostream>
#include<cstdlib>
using namespace std;
AltMoney::AltMoney()
{
}
AltMoney::AltMoney(int d, int c)
{
       dollars = d;
       cents = c;
}
void AltMoney::display_money()
{
     cout << "$" << dollars << ".";
     if(cents <= 9)
         cout << "0";  //to display a 0 in the left for numbers less than 10
     cout << cents << endl;
}

AltMoney add(AltMoney m1, AltMoney m2, AltMoney &sum)
{
     int extra = 0;
     sum.cents = m1.cents + m2.cents;
     if(sum.cents >=100){
         sum.cents = sum.cents - 100;
         extra = 1;
      }
      sum.dollars = m1.dollars + m2.dollars + extra;
      return sum;
}

AltMoney substract(AltMoney m1, AltMoney m2, AltMoney &sum)
{
     int extra = 0;
     sum.cents = m1.cents - m2.cents;
     if(sum.cents >=100){
         sum.cents = sum.cents - 100;
         extra = 1;
      }
      sum.dollars = m1.dollars - m2.dollars + extra;
      return sum;
}

void AltMoney:: read_money()
{
     cout << "Enter dollar \n";
     cin >> dollars;
     cout << "Enter cents \n";
     cin >> cents;
     if( dollars < 0 || cents < 0)
     {
            cout << "Invalid dollars and cents, negative values\n";
            exit(1);
      }
}

