#include "ok.h"

istream & operator >>(istream & putazo, Ok &k)
{
double num, vale;
cout << "enter a number" << endl;
putazo >> num;
k.set_value(num);
cout << "enter a number" << endl;
putazo >> vale;
k.set_deluxe(vale);




}
ostream & operator << (ostream & puto, Ok & q)
{
cout << "eres un putazo numero " << q.get_value() << endl;
cout << "eres un foker number " << q.get_deluxe() << endl;


}
