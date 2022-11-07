#include <iostream>

using namespace std;
void test(double);
int main()
{
     char letter;
    do{
    double val;

    cout << "enter a number to dive by 2" << endl;
    cin >> val;

    test(val);

    cout << "want to do it again Y\N?" << endl;
    cin >> letter;


    }while(letter == 'y' || letter == 'Y');




}

void test(double m){

if(m == 0){
    throw "Error: Cannot dive by zero";
}

else{
double result = m/2;
cout << "result = " << result;
    }
}
