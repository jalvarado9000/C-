#include "demo.h"
#include <iostream>

using namespace std;

Demo::Demo(int w,int l)
{
cout << "Hi im the constructor" << endl;
cout << "i am the first value: " << w << endl;
cout << "i am the second value: " << l << endl;
}
Demo::~Demo()
{
    cout << "Hi im deconstructor i run when all the proces of the program finishes to free up memory by destroynig the object"<<endl;
}
