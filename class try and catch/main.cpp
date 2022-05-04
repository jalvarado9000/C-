#include <iostream>
#include "triangle.h"

using namespace std;

int main()
{
    double num,val;
    Triangle shape;
    bool anotherOne = true;

    while(anotherOne){
    cout << "enter the width and lenght" << endl;
    cin >> num >> val;

    try{
    shape.set_width(num);
    shape.set_length(val);
    cout << "Your area is" << endl;
    cout << shape.get_area() << endl;

    anotherOne = false;

    }


    catch(Triangle::NegativeWidth ww)
    {
    //ww.set_Nwidth(num);
    cout << "Error :" << ww.get_Nwidth() << endl;

    cout << " is a negative number on the width variable please try again" << endl;
    }


    catch(Triangle::NegativeLenght ll)
    {
    //ll.set_Nlength(val);
    cout << "Error :" << ll.get_Nlength() << endl;

    cout << " is a negative number on the width variable please try again" << endl;
    }

    }




}



