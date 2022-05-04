#include "rectangle.h"
#include <iostream> // Needed for cout
#include <cstdlib> // Needed for the exit function
 using namespace std;





 double Rectangle::getArea()
 {
 cout << "this the value of widht = "<<  width  << endl;
 cout <<  "this is the value of lenght = " << length << endl;
 cout << "this = " << this<<endl;
 //cout << "*this = "  << *this << endl;
 return width*length;
 }
