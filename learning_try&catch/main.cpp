#include <iostream>

using namespace std;
double divide(double);

int main()
{
    double num;
    cout << "enter a number to divide by 2" << endl;
    cin >> num;

    try
    {

    double quotient = divide(num);
    cout << "Your quotien is:" << quotient << endl;

    }
    catch(string exceptionString)
    {
      cout <<  exceptionString;
    }




}

double divide(double val)
{
    if(val == 0)
        {
        string exceptionString = "You cant dive by two";
        throw exceptionString;
        }

    return val/2;


}
