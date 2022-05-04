#include <iostream>

using namespace std;

int main()
{
    int num = 3;
    int Arr[3];



    for(int i = 0; i < num; i++)
        {
        Arr[i] = i+2;
        }

   for(int i = 0; i < num; i++)
        {
       cout << Arr[i] << endl;
        }


    int  var = Arr[0];

    cout << var;

    return 0;
}
