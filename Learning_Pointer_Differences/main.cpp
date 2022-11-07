#include <iostream>

using namespace std;

int main()
{

    int age;
    int *pAge;

    age = 15;

    pAge = &age;

    cout << *pAge << endl;
    cout << pAge << endl;

    *pAge = 69;

    cout << *pAge << endl;
    cout << age << endl;






    return 0;
}
