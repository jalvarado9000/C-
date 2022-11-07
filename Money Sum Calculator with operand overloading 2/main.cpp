// P82.cpp - This program adds money of two different people
#include<iostream>
#include<cstdlib>
#include "altmoney.h"
using namespace std;
void read_money(int& d, int& c);

int main()
{
    int d, c;
    AltMoney m1, m2, sum;

    //makes sum value be zero dollar and cents
    sum = AltMoney(0, 0);
    //input the user money and cents
    read_money(d, c);
    //set m1 dollar and cents to the value inputed in the read_money function
    m1 = AltMoney(d, c);
    cout << "The first money is: ";
    //outputs the money and cents inputed by the user
    m1.display_money();
    cout << endl;

    //input the user money and cents
    read_money(d, c);
    //set m2 dollar and cents to the value inputed in the read_money function
    m2 = AltMoney(d, c);
    cout << "The second money is: ";
    //outputs the money and cents inputed by the user
    m2.display_money();
    cout << endl;

    //overloading the == symbol
    if (m1 == m2) {
        m1.display_money();
        cout << " is equal to ";
        m2.display_money();
        cout << endl;
    }
    //overloading the > symbol
    else if (m1 > m2) {
        m1.display_money();
        cout << " is greater than ";
        m2.display_money();
        cout << endl;
    }
    //overloading the < symbol
    else if(m1 < m2) {
        m1.display_money();
        cout << " is lesser than ";
        m2.display_money();
        cout << endl;
    }

    else
    cout << "Invalid option" << endl;

    //overloading the + symbol
    sum = m1 + m2;
    cout << "The total sum is: ";

    sum.display_money();

    return 0;
}

//funciont that input the user values
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
