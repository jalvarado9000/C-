#ifndef ALTMONEY_H
#define ALTMONEY_H
#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

class AltMoney
{
    public:
        AltMoney();

        //operation overloading functions
        friend istream& operator >>(istream& in, AltMoney& m);
        friend ostream& operator << (ostream& in, AltMoney& m);
        friend AltMoney operator +(AltMoney m1, AltMoney m2);
        friend void write_money(ofstream& out, AltMoney m);

    private:
        int dollars;
        int cents;

};

#endif // ALTMONEY_H
