#include <iostream>
#include <iomanip>

using namespace std;
template <class T,class K>

T add(T &val, K &val2)
{

return val + val2;


}

int main()
{
    double  number;
    long double decimal;

    cout << "This program will add decimal to your number" << endl;
    cout << "Enter your number" << endl;
    cin >> number;

    cout << "Enter your decimals" << endl;
    cin >> decimal;

    cout << setprecision( 3)<<showpoint;

    cout << "Your sum is: " << add(number,decimal) << endl;


    return 0;
}
