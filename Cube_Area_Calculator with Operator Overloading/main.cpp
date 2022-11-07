#include <iostream>
#include "shape.h"

using namespace std;


class Shape
{
public:
    double width;
    double length;
public:
    friend istream& operator >>(istream &in, Shape& m);
    friend ostream& operator <<(ostream &out, Shape& m);



void set_width(double w){width = w;}
void set_length(double l){length = l;}
double get_width(){return width;}
double get_length(){return length;}





};

istream& operator >>(istream &in, Shape& m)
{
double num, val;
cout << "enter the width" << endl;
in >>  num;
m.set_width(num);



cout << "enter the length" << endl;
in >> val;
m.set_length(val);


return in;
}

ostream& operator << (ostream &out, Shape& m)
{
out << m.width << "raaaaaa" << endl;
out << m.length << "praaaaaa" << endl;

return out;
}


int main()
{


Shape M;


cin >> M;
cout << M;












}
