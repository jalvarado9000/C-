#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
class AltMoney
{
    public:
        AltMoney();
        friend istream& operator >>(istream& in, AltMoney& m);
        friend ostream& operator << (ostream& in, AltMoney& m);

        friend AltMoney operator +(AltMoney m1, AltMoney m2);
        friend void write_money(ofstream& out, AltMoney m);
    private:
        int dollars;
        int cents;

};

void write_money(ostream& out, AltMoney m);
istream& operator >>(istream& in, AltMoney& m);
int main( )
{

     AltMoney m1, m2, sum;

     cout << "The first money is:";
     cin >>  m1;

     cout << "The second money is:";
     cin >> m2;

     sum = m1+m2;


     cout << "The sum is:";
     cout << sum;




     return 0;
}
AltMoney::AltMoney()
{
}
ostream& operator << (ostream& ous, AltMoney& m)
{
      ous << "$" << m.dollars << ".";
     if(m.cents <= 9)
         ous << "0";  //to display a 0 on the left for numbers less than 10
     ous << m.cents << endl;

     return ous;
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
