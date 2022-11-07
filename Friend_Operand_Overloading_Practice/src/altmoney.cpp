#include "altmoney.h"

//default constructor
AltMoney::AltMoney()
{
}
//outputs the total dollar and cents
ostream& operator << (ostream& ous, AltMoney& m)
{
      ous << "$" << m.dollars << ".";
     if(m.cents <= 9)
         ous << "0";  //to display a 0 on the left for numbers less than 10
     ous << m.cents << endl;

     return ous;
}
//sums the dollars and cents of both objects
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

//ask the user to input dollars and cents
istream& operator >>(istream& in, AltMoney& m)
{
  int d, c;

     cin >> d;
     cin >> c;
     if( d < 0 || c < 0)
     {
     cout << "Invalid dollars and cents, negative values\n";

     }
     m.dollars = d;
     m.cents = c;
    return in;
}
