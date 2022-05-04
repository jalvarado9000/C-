#include <iostream>

using namespace std;

void showmenu(){

int op;
cout << "welcome to the root finding calculator" << endl;
cout << "Press: " << endl;
cout << "1 for Bisection" << endl;
cout << "2 for False position iteration" << endl;
cout << "3 for Fixed-Point iteration" << endl;
cout << "4 for Newton" << endl;
cout << "5 for secant" << endl;
cout << "6 for Mod Secatn" << endl;
cout << "7 for Matlab fzero" << endl;
cout << "8 for Muller" << endl;
cout << "9 for Matlab roots" << endl;
cout<< "10 for exit" << endl;
cin >> op;

switch(op){

case 1:
    cout << "1" << endl;
    break;
case 2:
    cout << "2" << endl;
    break;
case 3:
    cout << "3" << endl;
    break;
case 4:
    cout << "4" << endl;
    break;
case 5:
    cout << "5" << endl;
    break;
case 6:
    cout << "6" << endl;
    break;


}

}


int main()
{




        showmenu();

    return 0;
}
