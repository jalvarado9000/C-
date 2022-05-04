#include <iostream>
#include <cstdlib>
#include <utility>
#include <tuple>
#include "pair.h"
using namespace std;


int main()
{

Pair <int> score();
Pair <string>name();
//pass the score to the variable first and second
score.set_element(87,90);
//passes the name the name to the vairable first and second
name.set_element("Tom","Martha");

//gets the scores previously set
cout <<score.get_element() << " " << score.get_elements() << endl;
cout << name.get_element() << " " << name.get_elements() << endl;
//displays the pairs of scores
score.display_pairs();
// display the name pairs
name.display_pairs();

    return 0;
}
