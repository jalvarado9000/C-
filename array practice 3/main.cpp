#include <iostream>

using namespace std;

int main()
{

    int num = 4;
    int arra_pay[num];
    int arr_hour[num];

    for(int i = 0; i < num; i++)
        {
        cout << "enter the hours worked by employee #" << i+1 << endl;
        cin >> arr_hour[i];
        cout << "enter the pay of employee #" << i+1 << endl;
        cin >> arra_pay[i];

        }

    for(int i = 0; i < num; i++)
        {
        int result = arra_pay[i]*arr_hour[i];
        cout << "the pay for employee #" << i+1 << " is: $" << result << endl;

        }








}


