#include <iostream>

using namespace std;

int main()
{

    int num, count;
    float salary;

    int *numptr;
    int *countptr;
    float *salaryptr;

    numptr = &count;
    countptr = &num;
    salaryptr = &salary;

    *numptr = 6;
    *countptr = 980;
    *salaryptr = 3200;

    cout << num << endl;
    cout << count << endl;
    cout << salary << endl;












    return 0;
}
