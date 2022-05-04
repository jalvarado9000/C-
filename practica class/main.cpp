#include <iostream>

using namespace std;

class Wiiu
{
private:
    double nintendoGames;
    double otherGames;

public:
    void setNintendoGames(double);
    void setOtherGames(double);
    double getNintendoGames();
    double getOtherGames();
    double getAllGames();


};

void Wiiu::setNintendoGames(double N)
{
nintendoGames = N;
}

void Wiiu::setOtherGames(double O)
{
otherGames = O;

}

double Wiiu::getNintendoGames()
{
return nintendoGames;

}

double Wiiu::getOtherGames()
{
return otherGames;
}

double Wiiu::getAllGames()
{
return nintendoGames + otherGames;

}

int main()
{
    Wiiu console;
    Wiiu sony;
    Wiiu xbox;
    double qty1,qty2,qty3,qty4,qty5,qty6;

    cout << "What is the quantity of nintendo games?\n";
    cin >> qty1;
    cout << "What is the quantity of 3rd party games?\n";
    cin>> qty2;

    cout << "What is the quantity of sony games?\n";
    cin >> qty3;
    cout << "What is the quantity of 3rd party games?\n";
    cin>> qty4;

    cout << "What is the quantity of xbox games?\n";
    cin >> qty5;
    cout << "What is the quantity of 3rd party games?\n";
    cin>> qty6;




    console.setNintendoGames(qty1);
    console.setOtherGames(qty2);
    sony.setNintendoGames(qty3);
    sony.setOtherGames(qty4);
    xbox.setNintendoGames(qty5);
    xbox.setOtherGames(qty6);



    cout << "These are your values\n";
    cout << console.getNintendoGames();
    cout <<"\n These are your other value\n";
    cout << console.getOtherGames();
    cout << "these are your sum";
    cout << console.getAllGames();

    cout << "These are your values\n";
    cout << sony.getNintendoGames();
    cout <<"\n These are your other value\n";
    cout << sony.getOtherGames();
    cout << "these are your sum";
    cout << sony.getAllGames();

    cout << "These are your values\n";
    cout << xbox.getNintendoGames();
    cout <<"\n These are your other value\n";
    cout << xbox.getOtherGames();
    cout << "these are your sum";
    cout << xbox.getAllGames();












    return 0;
}
