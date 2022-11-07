#include <iostream>

using namespace std;


class AltMoney
{
    public:
        AltMoney();
        AltMoney(int d, int c);
        friend AltMoney operator +(AltMoney m1, AltMoney m2);
        friend AltMoney operator %(AltMoney m1, AltMoney m2);
        friend AltMoney operator >(AltMoney m1, AltMoney m2);
        friend AltMoney operator == (AltMoney m1, AltMoney m2);
        friend AltMoney operator < (AltMoney m1, AltMoney m2);

        void display_money( );
    private:
        int dollars;
        int cents;
};

void read_money(int& d, int& c);

int main( )
{
     int d, c;

     AltMoney m1, m2,result, result4;

     read_money(d, c);
     m1 = AltMoney(d,c);
     cout << "The first money is:";
     m1.display_money();

     read_money(d, c);
     m2 = AltMoney(d,c);
     cout << "The second money is:";
     m2.display_money();

     result = m1+ m2;
     cout << "The sum is:" << endl;
     result.display_money();


     result4 = m1%m2;

     result4.display_money();

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
         cout << "0";  //to display a 0 on the left for numbers less than 10
     cout << cents << endl;
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


AltMoney operator > (AltMoney m1, AltMoney m2)
{

AltMoney percent;

int extra = 0;

if(m1.dollars > m2.dollars)
    {

     percent.cents = m1.cents + m2.cents;
     if(percent.cents >=100){
         percent.cents = percent.cents - 100;
         extra = 1;
     }

    percent.dollars = m1.dollars - m2.dollars + extra;
    }

    percent.dollars = (percent.dollars)*.05;
     percent.cents = (percent.cents)*.05;


     cout << "income is larger than the expenditure" << endl;
     return percent;


}


AltMoney operator < (AltMoney m1, AltMoney m2)
{



AltMoney percen;
int extra = 0;


if(m2.dollars > m1.dollars)
    {

     percen.cents = m1.cents + m2.cents;
     if(100 <= percen.cents ){
         percen.cents = percen.cents - 100;
         extra = 1;
     }

    percen.dollars = m1.dollars - m2.dollars + extra;
    }

    percen.dollars = (percen.dollars)*(-.02);
     percen.cents = (percen.cents)*(-.02);
    cout << " expenditure is larger than the income." << endl;
    return percen;

}

AltMoney operator == (AltMoney m1, AltMoney m2)
{

AltMoney percen;
if(m2.dollars == m1.dollars && m2.cents == m1.cents)
    {
    percen.dollars = m1.dollars - m2.dollars;
    percen.cents = m1.cents - m2.cents;
    cout << "expenditure is the same as income" << endl;
     return percen;
     }

}


AltMoney operator % (AltMoney m1, AltMoney m2)
{


if(m1.dollars > m2.dollars)
    {

    return m1>m2;

    }
else if(m1.dollars < m2.dollars)
    {
    return m1<m2;
    }

else if(m2.dollars == m1.dollars && m2.cents == m1.cents)
    {

     return m1==m2;

    }
}



