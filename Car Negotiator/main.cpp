#include <iostream>
#include <iomanip>
#include <string>

 using namespace std;

 struct CarType {
 string maker;
 int year;
 float price;
 };

 void getYourCar( CarType & car );//pro

 int main( )
 {
 CarType myCar, yourCar;

 myCar.maker = "Mercedes"; // I wish
 myCar.year = 2005;
 myCar.price = 45567.75;

 getYourCar( yourCar );

 cout << "Your car is a: " << yourCar.maker << endl;
 cout << fixed << showpoint << setprecision( 2 ) <<
 "I'll offer $" << yourCar.price - 100 <<
 " for your car." << endl;

 return 0;
 }

 void getYourCar( CarType & car )
 {
 cout << "Enter your maker: ";
 cin >> car.maker;
 cout << "Enter the year: ";
 cin >> car.year;
 cout << "Enter the price: $";
 cin >> car.price;
 }



