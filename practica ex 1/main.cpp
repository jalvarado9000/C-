#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct phone {

    string maker;
    int year;
    double price;

};

int main()
{

 phone yourPhone;
 yourPhone.maker = "samsung";
 yourPhone.year = 2019;
 yourPhone.price = 999.99;

 cout << "Your phone is: " << yourPhone.maker << endl;
 cout << "The year is: " << yourPhone.year << endl;
 cout << "the price is: " << yourPhone.price << endl;




}
