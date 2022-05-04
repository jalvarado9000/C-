#include <iostream>

using namespace std;

int main()
{

int nums,b;

cout << "dime el size del array " << endl;
cin >> nums;



int *ptr = new int[nums];

cout << "enter the content" << endl;

for(int i = 0; i < nums; i++){

    cin >> ptr[i];

}

for(int i = 0; i < nums; i++){

    cout << ptr[i] << endl;

}

delete[] ptr;


    return 0;
}
