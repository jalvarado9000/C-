#include <iostream>
#include "intqueue.h"
using namespace std;

int main()
{

    int s = 5;
    IntQueue qe(s);

    cout << "entering the numbers " << endl;
    for(int i = 0; i < s; i++){
       cout << i << " " ;
        qe.enque(i);
    }
    cout << "the total amount of items are " << endl;
    cout << qe.getItem();

    cout << endl;
    cout << "entering 69.. but cant because: " << endl;
    qe.enque(69);



    cout << "the value in the que are" << endl;
    while(!qe.isEmpty())
        {
        int value;
        qe.Deque(value);
        cout << value << endl;
        }

       cout << "the total amount of items are " << endl;
    cout << qe.getItem();


    return 0;
}
