#include <iostream>

using namespace std;

//function that returns its value the smallest positive integer
int enough(int goal){

int sum = 0;
int i = 0;

//displays the largest number the loop sumed in order to get from 1 to goal without exceeding goal.
if(goal > 0){


    for(;sum < goal; i++)
        sum += i;
    return i-1;

}
//displays the largest number the loop sumed in order to get from 1 to goal without exceeding goal.
else{

    for(;sum < goal; i++)
        sum += i;
    return abs(i-1);

}

}

int main()
{

//ouput
    cout << enough(9) << endl;
     cout << enough(21) << endl;
      cout << enough(-7) << endl;
       cout << enough(1) << endl;




    return 0;
}
