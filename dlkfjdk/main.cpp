#include<iostream>
#include "rectangle.h"
using namespace std;

int main()
{

   Rectangle *shape = nullptr;
   Rectangle *kitchen = nullptr;

   //Dynamically allocate the space

   shape = new Rectangle;
   kitchen = new Rectangle;


   int num;
   cout << "this app lets you get the area of a rectangle, please enter the first number" << endl;
   cout << "what is the lenght? " << endl;
   cin >> num;

   shape->set_lenght(num);

   cout << "what is the width? " << endl;
   cin >> num;

   shape->set_width(num);

   cout << "this app lets you get the area of a kitchen, please enter the first number" << endl;
   cout << "what is the lenght of the kitchen? " << endl;
   cin >> num;

   kitchen->set_lenght(num);

   cout << "what is the width of the kitchen " << endl;
   cin >> num;

   kitchen->set_width(num);

   cout << "the first number you entered was " << endl;
   cout << shape->get_lenght() << endl;

   cout << "the second number you entered was " << endl;
   cout << shape->get_width() << endl;

   cout << "the area of the numbers is" << endl;
   cout << shape->get_area() << endl;

   cout << "these are your data" << endl;
   cout << "your lenght is " << endl;
   cout << kitchen->get_lenght() << endl;

   cout << "your width is " << endl;
   cout << kitchen->get_width() << endl;

   cout << "your area is" << endl;
   cout << kitchen->get_area() << endl;

   int total_area = kitchen->get_area() + shape->get_area();

   cout << "your total area is: " << endl;
   cout << total_area << endl;

   delete kitchen;
   delete shape;

   kitchen = nullptr;
   shape = nullptr;

   return 0;
}
