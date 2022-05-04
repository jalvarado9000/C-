#include <iostream>
#include "listo.h"
using namespace std;

int main()
{

listo l;
l.AddNode(1);
l.AddNode(2);
l.AddNode(3);
l.AddNode(4);
l.AddNode(5);

l.Print();

l.DeleteNode(3);
l.Print();


    return 0;
}
