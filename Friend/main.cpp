// P81a.cpp - This program adds money of two different people
#include<iostream>
#include<cstdlib>
using namespace std;

class AltMoney
{
    public:
        AltMoney();
        AltMoney(int d, int c);

        friend void add(AltMoney m3, AltMoney m4, AltMoney& sum9);
        friend void sub(AltMoney m1, AltMoney m2, AltMoney& sum);

        void display_money( );
    private:
        int dollars;
        int cents;
};

void read_money(int& d, int& c);

int main( )
{
     int d, c;
     AltMoney m1, m2, sum, m3,m4,sum9;

     sum = AltMoney(0,0);

     read_money(d, c);
     m1 = AltMoney(d,c);
     cout << "The first money is:";
     m1.display_money();

     read_money(d, c);
     m2 = AltMoney(d,c);
     cout << "The second money is:";
     m2.display_money();

     sub(m1,m2, sum);
     cout << "The sum is:";
     sum.display_money();




     sum9 = AltMoney(0,0);

     read_money(d, c);
     m3 = AltMoney(d,c);
     cout << "The first money is:";
     m3.display_money();

     read_money(d, c);
     m4 = AltMoney(d,c);
     cout << "The second money is:";
     m4.display_money();

     add (m3,m4, sum9);
     cout << "The sum is:";
     sum9.display_money();


     return 0;
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

void add(AltMoney m1, AltMoney m2, AltMoney& sum9)
{
     int extra = 0;
     sum9.cents = m1.cents + m2.cents;
     if(sum9.cents >=100){
         sum9.cents = sum9.cents - 100;
         extra = 1;
      }
      sum9.dollars = m1.dollars + m2.dollars + extra;
}

void sub(AltMoney m1, AltMoney m2, AltMoney& sum)
{
     int extra = 0;
     sum.cents = m1.cents - m2.cents;
     if(sum.cents >=100){
         sum.cents = sum.cents - 100;
         extra = 1;
      }
      sum.dollars = m1.dollars - m2.dollars + extra;
}

void read_money(int& d, int& c)
{
     cout << "Enter dollar \n";
     cin >> d;
     cout << "Enter cents \n";
     cin >> c;
     if( d < 0 || c < 0)
     {
            cout << "Invalid dollars and cents, negative values\n";
            exit(1);
      }
}
