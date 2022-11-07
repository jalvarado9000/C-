#include <iostream>

using namespace std;

float sum(float arr[], int num){
    float all = 0;

    for(int i=0; i < num;i++)
        all += arr[i];


        return all;

    }


int main()
{

    int qty = 5;
    float arr[qty] = {5.8,2.6,9.0,3.4,7.1};

    cout << sum(arr,qty) << endl;

    return 0;
}
