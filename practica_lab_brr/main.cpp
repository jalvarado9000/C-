#include <iostream>

using namespace std;

sum_from_to(int num1, int num2)
{
int first = num1;
int second = num2;
int i = 0;

if(first <= second){

for(; first < (second+1); first++)
    i += first;
    return i;
}

else{

    for(; second < (first+1); first--)
    i += first;
    return i;
}
}

int main()
{




cout << "the sum for the numbers from " << 4 << " to " << 7 << " are: " << sum_from_to(4, 7) << endl;
cout << "the sum for the numbers from " << -3 << " to " << 1 << " are: " << sum_from_to(-3, 1) << endl;
cout << "the sum for the numbers from " << 7 << " to " << 4 << " are: " << sum_from_to(7, 4) << endl;
cout << "the sum for the numbers from " << 9 << " to " << 9 << " are: " << sum_from_to(9,9) << endl;


}
