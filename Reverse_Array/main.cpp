#include <iostream>

using namespace std;

float reverse_(float foward[],int num){

int n = num -1;
float temp[n];

for(int i = -1, j = 0; n > i; n--, j++){
    temp[j] = foward[n];

    cout << temp[j] << endl;
}

}

int main()
{
    int qty = 5;
    float foward[qty] = {5.8,2.6,9.0,3.4,7.1};

    reverse_(foward,qty);



    return 0;
}
