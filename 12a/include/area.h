#ifndef AREA_H
#define AREA_H

#include <iostream>


using namespace std;

class Area
{
    public:
        Area();
        void setArea(int ta);
        float getArea();
        void setUnits(string u);


    private:
       float area;
       string units;
};

#endif // AREA_H
