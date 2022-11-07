#include <iostream>

using namespace std;

//function that returns smallest value integer.
int enough(int goal){

//sums number from 1 to n number.
//that the total is equal or less but not exceeding goal.
int acc = 0;
for(int i = 1; i < goal; i++){
    acc += i;
    if(acc >= goal)
        return i;
}
}

int main()
{
    cout << enough(9) << endl;
    cout << enough(21) << endl;
    cout << enough(-7) << endl;
    cout << enough(1) << endl;


    return 0;
}
