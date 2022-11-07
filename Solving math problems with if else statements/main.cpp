#include <iostream>

using namespace std;

//function that returns as its value the sum of all the integers between first and last.

sum_from_to(int num1, int num2){

int first = num1;
int second = num2;
int i = 0;

//decision if the parameters are number from minor to major numbers.
if(first <= second){

    for(; first < second + 1; first++)
        i+=first;
        return i;
    }

//decision if the parameters are number from major to minor number.
else{

    for(; second < first + 1; first--)
        i+=first;
        return i;
}



}

int main()
{

    //output of the function
    cout << "the sum for the numbers from " << 7 << " to " << " are: " << sum_from_to(4,7) << endl;
    cout << "the sum for the numbers from " << 7 << " to " << " are: " << sum_from_to(-3,1) << endl;
    cout << "the sum for the numbers from " << 7 << " to " << " are: " << sum_from_to(7,4) << endl;
    cout << "the sum for the numbers from " << 7 << " to " << " are: " << sum_from_to(9,9) << endl;





}
