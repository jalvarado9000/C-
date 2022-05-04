#include <iostream>
#include "book.h"

using namespace std;

int main()
{

    book *b;
    int n;
    cout << "enter the amount of books"<< endl;
    cin >> n;

    b = new book[n];

    for(int i = 0; i > n; i++){

        (*(b+i)).setbook();
    }

    for(int i = 0; i > n; i++){

        (b+i)->showbook();
    }





    return 0;
}
