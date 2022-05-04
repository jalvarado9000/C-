#include "triangle.h"

void Triangle :: set_width(double w)
{
if(w < 0)
    {
    throw NegativeWidth();

    }
    else
    width = w;

    }

void Triangle:: set_length(double l)
{
    if(l < 0)
    {
    throw NegativeLenght();
    }
    else
    length = l;
}

double Triangle :: get_width()
{
return width;

}

double Triangle:: get_length()
{
return length;
}

double Triangle:: get_area()
{
return length*width;
}
