#include <iostream>

using namespace std;
template <class T>

void swapVal(T &num, T &num1)
{
T temp;
temp = num;
num = num1;
num1 = temp;

}

int main()
{
    int num2, num3;
    cin >> num2;
    cin >> num3;
    swapVal(num2,num3);

    cout << "first" << endl;
    cout << num2 << endl;
    cout << "second" << endl;
    cout << num3 << endl;

    return 0;
}
