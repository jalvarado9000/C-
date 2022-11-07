#include <iostream>

using namespace std;

int main()
{

 int r = 2;
 int c = 4;
 int arr[r][c];
 int sum =0;

 cout << "This app will calculate the sum of 8 digits" << endl;
 cout << "Please insert 8 digits you would like to sum" << endl;
 for(int x = 0; x < r; x++){

    for(int y =0; y < c; y++)
    cin >> arr[x][y];

}

for(int x = 0; x < r; x++)
    {
    for(int y =0; y < c; y++){
    cout << arr[x][y];
    }
}

for(int x = 0; x < r; x++)
    {
    for(int y =0; y < c; y++){
    sum+= arr[x][y];
    }
}

cout <<"the sum is: "<< sum << endl;


}
