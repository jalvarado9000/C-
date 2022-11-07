#include "area.h"

Area::Area(float av, string un)
{
    area_value = new float;
    *area_value = av;
    units = un;

}

string Area::get_units(){return units;}
float Area::get_half(){return (*area_value/2);}
float Area::get_quarter(){return (*area_value/4);}




Area::~Area()
{
   delete area_value;
}
