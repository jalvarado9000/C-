#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{

    Rectangle x;
    Rectangle kitchen;
    double rectWidth,rectLenght;

    cout << "This program will calculate the Area of a Rectangle\n";
    cout << "What is the width of the Rectangle?";
    cin >> rectWidth;

    cout << "What is the Length of the Rectangle?";
    cin >> rectLenght;

    x.setWidth(rectWidth);
    x.setLenght(rectLenght);

    cout << "This program will calculate the Area of a Kitchen\n";
    cout << "What is the width of the Kitchen?";
    cin >> rectWidth;

    cout << "What is the Length of the Kitchen?";
    cin >> rectLenght;

    kitchen.setWidth(rectWidth);
    kitchen.setLenght(rectLenght);



    cout << "Here is the rectangle data\n";
    cout << "Width: " << x.getWidth() <<"\n";
    cout << "Lenght: " << x.getLenght() <<"\n";
    cout << "Area: " << x.getArea() << "\n";

     cout << "Here is the kitchen data\n";
    cout << "Width: " << kitchen.getWidth() <<"\n";
    cout << "Lenght: " << kitchen.getLenght() <<"\n";
    cout << "Area: " << kitchen.getArea() << "\n";









    return 0;
}
