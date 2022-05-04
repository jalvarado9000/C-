#include <iostream>
#include "Point.h"

using namespace std;

int main()
{

   Point p1,p2(3.0,5.0),p3(p2);

   p1.set_x(4.0);
   p1.set_y(3.5);

   cout << p1.get_x() << endl;
   cout << p1.distanceToOrigin() << endl;
   cout << p3.distanceToPoint(p2.get_x(),p2.get_y()) << endl;
   cout << p3.angle() << endl;
   cout << p3.print() << endl;

   Point p4(p1.midPoint(p2));
   Point p5 = p1.midPoint(p2);

    return 0;
}
