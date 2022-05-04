#include<iostream>
using namespace std;

class Puneta
{
private:
    int big,small;



public:

Puneta(int x = 0, int y = 0)
{

big = x;
small = y;

}

Puneta operator + (Puneta const &obj)
{

Puneta result;
result.big = big + obj.big;
result.small = small + obj.small;
return result;
}

void print()
{
cout << "la suma de x " << big << endl;
cout << "la suma de y " << small << endl;
}

};

int main()
{

Puneta p1(5,2),p2(10,4),p3;

cout << "voy a sumar los valores" << endl;

p3 = p1 + p2;

p3.print();





}
