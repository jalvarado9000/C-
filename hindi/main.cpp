#include <iostream>
using namespace std;
class A
{
friend class B;
private:
    int x;

public:
    A(int a)
    {
        x = a;
    }


};

class B
{
public:
    void showData(A obj)
    {
    cout << "x value is " << obj.x;

    }

};


int main()
{

A obj1(5);
B obj2;
obj2.showData(obj1);



}
