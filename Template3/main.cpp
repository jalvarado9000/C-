#include <iostream>

using namespace std;
template <class T>

T multiply(T val, T vol)
{
return val*vol;

}

int main()
{
    int num, nim;
    double nom, nam;
    cout << "multiply  2 int" << endl;
    cin >> num >> nim;
    cout << multiply<int>(num,nim) << endl;

    cout << "multiply double " << endl;
    cin >> nom >> nam;
    cout << multiply<double>(nom,nam) << endl;



    return 0;
}
