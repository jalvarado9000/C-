#ifndef POINT_H
#define POINT_H


class Point
{
    private:
    double x,y;

    public:
        Point();
        Point(double x, double y);
        Point(Point p1);
        double distanceToOrigin();
        double distanceToPoint();
        double angle();
        void set_x(double x1);
        vodi set_y(double y1);
        double get_x();
        double get_y();
        void print();




};

#endif // POINT_H
