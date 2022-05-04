#include <iostream>

using namespace std;

class Bellacoso
{
private:
    double pinga;
    double totito;

public:
    void setPinga(double);
    void setTotito(double);
    double getPinga();
    double getTotito();
    double getPrena();



};

void Bellacoso::setPinga(double P)
{
pinga = P;

}

void Bellacoso::setTotito(double T)
{
totito = T;

}

double Bellacoso::getPinga()
{
return pinga;
}

double Bellacoso::getTotito()
{
    return totito;
}
double Bellacoso::getPrena()
{
return totito*pinga;
}


int main()
{
    Bellacoso xxx;
    int corta,circumference,prenitud;


    cout << "cuan corta es la jas: ";
    cin >> corta;
    cout << "Mierr";

    cout << "what is the circumference of the cochiee?";
    cin >> circumference;



    xxx.setPinga(corta);
    xxx.setTotito(circumference);


    cout << "estos son los resultados";
    cout << "la cortitud de la jaas es: " << xxx.getPinga();
    cout << "la circumferencia de la coochie es: " << xxx.getTotito();
    cout << "la prena va ser" << xxx.getPrena();




    return 0;
}
