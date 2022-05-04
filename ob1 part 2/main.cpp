#include <iostream>

using namespace std;

class Pilla
{

public:
    int mujeres;
    string Disco;

void printplace();



};

void Pilla::printplace()
{

cout << "me pillaron en : " << Disco << " de PR " << mujeres << " mujeres" << endl;






}

int main()
{

Pilla obj1;

obj1.Disco = "San Juan";

obj1.mujeres = 15;


obj1.printplace();



}

