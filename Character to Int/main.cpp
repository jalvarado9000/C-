#include <iostream>


using namespace std;

int main()
{
     string m;
    cout << "Character to Integer Conversion"<< endl;
    cout << "Please enter a character in order to convert it to a integer" << endl;
    cin >> m;


    char n = m[0];
    int i = n - '0';
    cout << i << endl;

    return 0;
}
