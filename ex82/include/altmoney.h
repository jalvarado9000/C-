#ifndef ALTMONEY_H
#define ALTMONEY_H

#include<iostream>
#include<cstdlib>
using namespace std;

class AltMoney
{
    public:
        AltMoney();
        AltMoney(int d, int c);

        friend bool operator == (AltMoney m1, AltMoney m2);//operation overloading the == to compare the dollar to see if they are the same
        friend bool operator >(AltMoney m1, AltMoney m2);//operation overloading the < to deterrmine if m1 is bigger than m2
        friend AltMoney operator +(AltMoney m1, AltMoney m2);//operation overloading the + to sum m1 and m2
        friend bool operator < (AltMoney m1, AltMoney m2);//operation overloading the < to determine if m1 is smaller than m2

        void display_money( );//show the money enterd by the user
    private:
        int dollars;
        int cents;

};





#endif // ALTMONEY_H
