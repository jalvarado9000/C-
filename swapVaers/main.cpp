#include <iostream>

using namespace std;
//template<class T>

//T swapVars(T&,T&);
void swapVars(int& ,int& );



int main()
{
    int num,num2;
    cout << "enter two vairble and i will swap them." << endl;
    cin >> num >>num2;

    swapVars(num,num2);

    cout << "now your variables are: " << num << " "<< num2;
}

//template<class T>
void swapVars(int &n, int &n2)
{
int temp;

temp = n;
n = n2;
n2 = temp;


}
