#include <iostream>

using namespace std;


void sort3(float &x, float &y, float &z){
//function that sorts three values

float temp;
temp = x;
x = z;
z = y;
y = temp;

}

int main()
{

    float a = 3.2, b = 5.8, c = 0.9;
    //values that are going to the sorting function

    sort3(a, b,c);


    cout << a << " " << b << " " << c << endl;
    //outputs the new values of the pre defined now sorted

    return 0;
}


