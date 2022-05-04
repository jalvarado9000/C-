#include "rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::set_lenght(int l)
{
    if(lenght <= 0)
    lenght = l;
    else
        {
        cout << "Invalid number" << endl;
        cout << "Please try again" << endl;

        }



}

void Rectangle::set_width(int w){width = w;}

int Rectangle::get_lenght(){return lenght;}

int Rectangle::get_width(){return width;}

int Rectangle::get_area(){return width*lenght;}


