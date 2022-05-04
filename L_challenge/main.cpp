#include <iostream>
#include <string>
#include "node.h"

using namespace std;




int main()
{


    node<string> l;
    l.add("9fdfdf");
    l.add("8");
    l.add("5");
    l.add("2s");

    l.display();
    cout << endl;


    return 0;
}
