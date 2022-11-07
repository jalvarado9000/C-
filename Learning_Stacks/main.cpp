// This program demonstrates the IntStack class.
 #include <iostream>
 #include "StackInt.h"
 using namespace std;
 int main()
 {
StackInt stac(5);
int var,var1,var2;

 int num1,num2,num3,num4;

int catchVar; // To hold values popped off the stack

     cout << "Enter four varibles" << endl;
     cin >> num1; cin >> num2; cin >> num3; cin >> num4;


    stac.push(num1);
    cout << num1 << " has just been pushed" << endl;

    stac.push(num2);
    cout << num2 << " has just been pushed" << endl;

    stac.sum(var);

    cout << "poping " << num1 << " and "<< num2 << endl;
    stac.pop(num1);
    stac.pop(num2);

    cout << "pushing the sum" << var << endl;
    stac.push(var);


    stac.push(num3);
    cout << num3 << " has just been pushed" << endl;

    stac.push(num4);
    cout << num4 << " has just been pushed" << endl;

    stac.resta(var1);

    cout << "poping " << num3 << " and "<< num4 << endl;
    stac.pop(num3);
    stac.pop(num4);

    cout << "pushing the resta" << var1 << endl;
    stac.push(var1);



    cout << "going to multiply" << endl;
    stac.multiply(var2);

    cout << "poping" << var << var1 <<  endl;
    stac.pop(var);
    stac.pop(var1);

    cout << "pushing var2" << endl;
    stac.push(var2);



 // Define a stack object to hold 5 values.

 // Push the values 5, 10, 15, 20, and 25 onto the stack.
 cout << "Pushing 5\n";
 stac.push(5);
 cout << "Pushing 10\n";
 stac.push(10);
 cout << "Pushing 15\n";
 stac.push(15);
 cout << "Pushing 20\n";
 stac.push(20);
 cout << "Pushing 25\n";
 stac.push(25);

 // Pop the values off the stack.
 cout << "Popping...\n";
 stac.pop(catchVar);
 cout << catchVar << endl;
 stac.pop(catchVar);
 cout << catchVar << endl;
 stac.pop(catchVar);
 cout << catchVar << endl;
 stac.pop(catchVar);
 cout << catchVar << endl;
 stac.pop(catchVar);
 cout << catchVar << endl;

 return 0;
 }
