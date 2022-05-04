#include <iostream>

using namespace std;

//function that returns true if prime, returns false otherwise.
bool is_prime(int p1){

 bool check = false;

//function only accepts positive numbers
//if the number is negative return false.
    if(p1 <= 0)
        return check;

//since 1 is a pair number
//if p1 is 1 its pair by default.
    else if(p1 == 1)
        return check;

//if p1 is a number that is not -n <= 1.
//checks if its pair or prime number.
    else{

    for(int i = 2; i < p1; i++){
        //if its pair the loop ends and returns false.
        if(p1 % i == 0){
            return check;
        }
    }

    //if its prime returns true.
    return true;
    }
}


int main()
{

    cout << is_prime(19) << endl;
    cout << is_prime(1) << endl;
    cout << is_prime(51) << endl;
    cout << is_prime(-13) << endl;


    return 0;
}
