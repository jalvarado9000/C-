#include <iostream>

using namespace std;

//function that looks for greatest common denominator.
int g_c_d(int p1, int p2){

int greatest = 0, acc = 0;

//checks if arguments are greater than or equal to zero.
if(p1 <= 0 || p2 <= 0){
    return 0;
}

//check if p1 is lesser than p2.
//then looks for the greatest common denominator.
//exits loop when i is greater than p1 returning the g.c.d.
else if(p1 < p2){

    for(int i = 1; i <= p1; i++){
        acc += i;
        if(p1 % i == 0 && p2 % i == 0)
            greatest = i;

    }
    return greatest;

    }

//check if p2 is lesser than p1.
//then looks for the greatest common denominator.
//exits loop when i is greater than p2 returning the g.c.d.
else if(p2 < p1){

    for(int i = 1; i <= p2; i++){
        acc += i;
        if(p1 % i == 0 && p2 % i == 0)
            greatest = i;

    }
    return greatest;
}

//invalid input message appears and returns zero.
    else{
        cout << "Please Try again" << endl;
        return 0;
    }



}

int main()
{
    cout << g_c_d(40,50) << endl;
    cout << g_c_d(256,625) << endl;
    cout << g_c_d(42,6) << endl;
    cout << g_c_d(0,32) << endl;
    cout << g_c_d(10,-6) << endl;


    return 0;
}
