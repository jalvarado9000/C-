#include <iostream>
using namespace std;

template <class T>
T square(T number)
{
return number * number;
}

int main()
{
    int val;
    double super;

    cout << "Enter the first number " << endl;
    cin >> val;
    cout << "your square is: " << endl;
    cout << square(val) << endl;

    cout << "Enter the second number " << endl;
    cin >> super;
    cout << "your square is: " << endl;
    cout << square(super) << endl;


    return 0;
}
