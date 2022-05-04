#include <iostream>
#include <cctype>

using namespace std;



int main()
{
int c;
int* arr = new int[c];
//int c;
cin >> c;


//int* arr = new int[c];
cout << "you created a dynamic pointer" << endl;

for(int i = 0; i < c; i++ ){

    cin >> arr[i];


}

for(int i = 0; i < c; i++ ){

    cout <<  arr[i] << endl;


}

delete[] arr;


return 0;

}
