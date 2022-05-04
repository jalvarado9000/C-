#include <iostream>
 using namespace std;
/*
 int main()
 {
 int i = 5, j = 6, k = 7, n = 3;
 //cout << i + j  << endl;
 //cout << k - k % n << endl;
 cout << i + j * k - k % n << endl;
cout << i / n << endl;


 }

*/


int main()
 {
/*const int LENGTH = 21;
 char message[LENGTH];


 cout << "Enter a sentence on the line below." << endl;
 cin >> message;

 cout << message << endl;


*/


const int LENGTH = 21;
char message[LENGTH];

 cout << "Enter a sentence on the line below." << endl;
 cin.getline(message, LENGTH,'\n');

 cout << message << endl;

 }

