#include <iostream>

using namespace std;


void args(int[],int);
int main()
{

    int num = 5;
    int Size[num] = {55,66,77,88,99};
    args(Size,num);
    return 0;
}

void args(int s[],int n)
{
for(int i =0; i<n; i++)
    {
    cout << s[i] << endl;

    }

}
