#include <iostream>

using namespace std;

int main()
{

    int num = 5;
    int arr[num];

    for(int &val : arr)
        cin >> val;

    for(int val : arr)
        cout << val << endl;









}
