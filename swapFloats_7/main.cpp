#include <iostream>

using namespace std;

void swap_floats(float &num, float &num2){

float temp;
temp = num;
num = num2;
num2 = temp;
}

int main()
{
    float x = 5.8, y = 0.9;
    swap_floats(x, y);
    cout << x << " " << y << endl;
    //cout << "Hello world!" << endl;
    return 0;
}
