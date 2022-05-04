#include <iostream>

using namespace std;

int main()
{

    int num = 4;
    int new_array[num] = {15,69,96,55};
    int old_array[num];

    for(int i = 0; i < num; i++)
        {
        old_array[i] = new_array[i];

        }
    for(int i = 0; i < num; i++)
        {
        cout << "the result of the array copied is: ";
        cout << old_array[i] << endl;
        }







    return 0;
}
