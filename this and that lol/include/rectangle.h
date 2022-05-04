#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;
 class Rectangle
 {
 private:
 double width;
 double length;

 public:
     Rectangle &set_both(double width, double lenght)
     {
     this->width = width;
     this->length = lenght;
     return *this;

     }

ostream& operator << (ostream& out, Rectangle& obj)
{
cout << obj<< endl;


return out;


}



 double getArea();
 };



#endif // RECTANGLE_H
