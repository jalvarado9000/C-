#include <iostream>

using namespace std;

int main()
{

    int num = 3;
    int Ar[num];


for(int i = 0; i < num; i++)
    {
     cout << "enter the #" << i + 1 << " item" << endl;
    cin >> Ar[i];


    }

for (int i = 0; i < num; i++)
    {
    cout << "your #" <<i +1 << " data is" << endl;
    cout << Ar[i] << endl;
    }

    return 0;
}
