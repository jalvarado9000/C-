#include "area.h"

Area::Area()
{

}


void Area::setArea(int av){
area_value = av;

}

float Area::getArea(){
    return area_value;
}

void Area:: setUnits(string u){units = u;}


string Area::getUnits(){return units;}

