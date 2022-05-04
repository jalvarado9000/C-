#include <iostream>
#include "area.h"

using namespace std;

int main()
{

    Area* p1;
    p1 = new Area();
    float tempArea;
    string tempUnit;

    cout << "Enter the units:";
    cin >> tempUnit;
    p1->setUnits(tempUnit);
    cout << "Enter the area value: ";
    cin >> tempArea;
    (*p1).setArea(tempArea);

    cout << "A half of your area is = " << p1->getArea()/2 << endl;
    cout << "A quarter of your area is = " << p1->getArea()/4 << endl;

    delete p1;
    return 0;

}
