#ifndef AREA_H
#define AREA_H

#include <iostream>


using namespace std;

class Area
{
    public:
        Area();
        void setArea(int ta);//sets area
        float getArea();//gets area
        void setUnits(string u);//sets the units
        string getUnits();//gets the units


    private:
       float area_value;//stores the area value given by the user
       string units;//stores the units string given by the user
};

#endif // AREA_H
