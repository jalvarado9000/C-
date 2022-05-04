#include <iostream>


using namespace std;

int main()
{
     string m;
    cout << "enter a string" << endl;
    cin >> m;


    char n = m[0];
    char k = m[1];

    int i = n - '0';
    int j = k - '0';

    cout << i + j << endl;

    return 0;
}
