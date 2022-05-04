#include <iostream>
 #include <string>
 #include <iomanip>
 using namespace std;

 struct consolas
 {
 string brand;
 string name;
 int price;
 int year;
 int multiply;



 };

int main()
{

consolas compradas;

cout << "Quien es el manufacturero de la consola? ";
cin >> compradas.brand;

cout << "Como se llama la consola? ";
cin >> compradas.name;

cout << "Cual fue su retail price? ";
cin >> compradas.price;

cout << "En que ano esta consola salio al merdado? ";
cin >> compradas.year;


compradas.multiply = compradas.price*compradas.year;
cout << "La multiplicacion es: ";
cout << compradas.multiply;





}
