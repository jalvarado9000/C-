#include <iostream>
#include "area.h"
using namespace std;
int main ()
{
   float *p;
   string u;
   p = new float;             // Variables created using the new operator are called dynamic variables
   cout << "Enter an integer \n";
   cin >> *p;
   cout << "enter the unit" << endl;
   cin >> u;
   Area area(*p,u);

   cout << area.get_half() << " " << area.get_units() << endl;
   cout << area.get_quarter() << " " << area.get_units() << endl;

   return 0;
}
