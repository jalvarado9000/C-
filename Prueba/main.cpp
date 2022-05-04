#include <iostream>
#include "pair.h"

using namespace std;

int main()
{
Pair <int> grades;
Pair <string>names;
//pass the score to the variable first and second
grades.<int>set_element(87,90);
//passes the name the name to the vairable first and second
names.set_element("Tom","Martha");

//gets the scores previously set
cout <<grades.get_element() << " " << grades.get_elements() << endl;
cout << names.get_element() << " " << names.get_elements() << endl;
//displays the pairs of scores
grades.display_pairs();
// display the name pairs
names.display_pairs();
return 0;
}
