#include <iostream>

using namespace std;

int main()
{

     int value, input;
    cout << "what is the size of the array" << endl;
    cin >> value;
    cout << "what is the number you are looking for" << endl;
    cin >> input;


    int numbers[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

    numbers[25-value];

    for(int i = 0; i < value; i++){

      if(numbers[i] > input){

            cout << numbers[i] << endl;

      }
    }








    return 0;
}
