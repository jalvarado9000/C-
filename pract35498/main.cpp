#include <iostream>
using namespace std;

void digit_name(int num){

    switch(num){

case 1:
    cout << "one";
    break;
case 2:
    cout << "two";
     break;
case 3:
    cout << "three";
     break;
case 4:
    cout << "four";
     break;
case 5:
    cout << "five";
     break;
case 6:
    cout << "six";
     break;
case 7:
    cout << "seven";
     break;
case 8:
    cout << "eight";
    break;
case 9:
    cout << "nine";
     break;
default:
    cout << "digit error";

    }


}

int main()
{
    int input;

    cout << "enter a number between 1 and 9" << endl;
    cout << "this program will say the number in English";

    do{
    cin >> input;
    digit_name(input);

    }while(true);

    return 0;
}





