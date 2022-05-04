#include <iostream>

using namespace std;

class Rectangle
{

private:
double lenght;
double width;

public:
    void setWidth(double);
    void setLenght(double);
    double getWidth();
    double getLenght();
    double getArea();


};


void Rectangle::setWidth(double w)
{

width = w;

}

void Rectangle::setLenght(double L)
{

lenght = L;

}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getLenght()
{
    return lenght;

}

double Rectangle::getArea()
{
    return lenght*width;
}


int main()
{


    Rectangle *kitchen = nullptr; //this points to a kitchen dimension, this is a pointer to a class
    Rectangle *bathroom = nullptr;//this points to a bathroom dimension

    double number; // una variable puede guardar todos nuestros datos
    double totalArea; //sumar todos nuestros pointers

    //Dynamically alocates the objects

    kitchen = new Rectangle;
    bathroom = new Rectangle;

    cout << "This program will calculate the Area of kitchen\n";
    cout << "What is the width of the kitchen?";
    cin >> number;

    kitchen->setWidth(number);


    cout << "What is the Length of the kitchen?";
    cin >> number;
    kitchen->setLenght(number);

    cout << "This program will calculate the Area of a bathroom\n";
    cout << "What is the width of the bathroom?";
    cin >> number;

    bathroom->setWidth(number);

    cout << "What is the Length of the bathroom?";
    cin >> number;

    bathroom->setLenght(number);

    cout << "the are of the kitchen is:" << endl;
    cout << kitchen->getArea();


    totalArea = kitchen->getArea() + bathroom->getArea();


    cout << "your kitchen area is: " << kitchen->getArea() << endl;
    cout << "your bathroom area is: " << bathroom->getArea() << endl;

    cout << "your total area is: " << totalArea;


    //deletes objects from memory;
    delete kitchen;
    delete bathroom;

    kitchen = nullptr;
    bathroom = nullptr;





    return 0;
}
