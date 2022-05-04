#ifndef AREA_H
#define AREA_H

#include <iostream>
using namespace std;

class Area
{
    public:
        Area(float av,string un);
        string get_units();
        float get_half();
        float get_quarter();
        ~Area();

    private:
        string units;
        float *area_value;

};

#endif // AREA_H
