#include "rectangle.h"

void Rectangle::setWidth(double w)
{

width = w;

}

void Rectangle::setLenght(double L)
{

lenght = L;

}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getLenght()
{
    return lenght;

}

double Rectangle::getArea()
{
    return lenght*width;
}
