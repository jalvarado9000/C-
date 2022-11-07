#include <iostream>
#include "demo.h"

using namespace std;



int main()
{
    Demo obj(10,15);
    cout << "Im suppose to be first" << endl;
    cout << "But the constructor has priority" << endl;
    return 0;
}
