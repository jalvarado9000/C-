#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{

Rectangle box;
 double rectWidth; // Local variable for width
 double rectLength; // Local variable for length


 cout << "This program will calculate the area of a\n";
 cout << "rectangle. What is the width? ";

 cin >> rectWidth;
 cout << "What is the length? ";
 cin >> rectLength;

 box.set_both(rectWidth,rectLength);



// cout << "Here is the rectangle's data:\n";
// cout << "Width: " << box.getWidth() << endl;
// cout << "Length: " << box.getLength() << endl;
 cout << "Area: " << box.getArea() << endl;
 return 0;
 }

