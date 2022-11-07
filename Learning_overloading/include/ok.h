#ifndef OK_H
#define OK_H

#include <iostream>
using namespace std;
class Ok
{
    private:
    double value;
    double deluxe;

    public:

    void set_value(double v){value = v;};
    void set_deluxe(double d){deluxe = d;};
    double get_value(){return value;};
    double get_deluxe(){return deluxe;};

    friend istream & operator >>(istream & putazo, Ok &k);
    friend ostream & operator << (ostream & puto, Ok & q);












};



#endif // OK_H
