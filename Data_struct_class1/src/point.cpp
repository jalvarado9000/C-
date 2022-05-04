#include "point.h"
#include <cmath>

Point::Point()
{
   x = 0.0;
   y = 0.0;
}

Point::Point(double x1, double y2)
{
x = x1;
y = y2;
}

Point::Point(Point p1)
{
x = p1.get_x();
y = p1.get_y();
}

double Point::distanceToOrigin(){return sqrt(x*x+y*y)}
double Point::distanceToPoint(double x1, double y1){return sqrt(pow(x-x1,2)+pow(y-y1,2))}
double Point::angle(){return atan(y/x)}
void Point::set_x(double x1){ x = x1;}
void Point::set_y(double y1){ y = y1;}
double Point::get_x(){return x;}
double Point::get_y(){return y;}
void Point::print(){cout << "(" << x << " , " << y << endl;}
Point Point::midPoint(double x1, double y1){return Point((x+x1)/(2.0)),((y+y1)/(2.0));}
