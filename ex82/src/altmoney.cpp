#include "altmoney.h"
#include<iostream>
#include<cstdlib>
using namespace std;

//operator overloading the > symbol
bool operator > (AltMoney m1, AltMoney m2)
{

if(m1.dollars > m2.dollars)
    return true;

else
    return false;
}


 bool operator < (AltMoney m1, AltMoney m2)
{


if(m1.dollars < m2.dollars)
    return true;

else
    return false;

}

bool operator == (AltMoney m1, AltMoney m2)
{

AltMoney percen;
if(m2.dollars == m1.dollars && m2.cents == m1.cents)
     return true;

     else
        return false;

}

AltMoney operator +(AltMoney m1, AltMoney m2)
{
     AltMoney temp;
     int extra = 0;
     temp.cents = m1.cents + m2.cents;
     if(temp.cents >=100){
         temp.cents = temp.cents - 100;
         extra = 1;
      }
      temp.dollars = m1.dollars + m2.dollars + extra;

      return temp;
}



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
