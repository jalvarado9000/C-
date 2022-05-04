#include <iostream>

using namespace std;

int main()
{

    int num = 6;
    int array_size[num];

    for(int i = 0; i < num; i++)
        {
        cout << "hours of worker #" << i+1 << endl;
        cin >> array_size[i];

        }

    for(int i =0; i < num; i++)
        {
        cout << "For employee #" << i+1 << "Your pay for the day is#" ;
        cout << (array_size[i])*7.25 << endl;


        }



    return 0;
}
