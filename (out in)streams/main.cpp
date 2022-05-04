#include <iostream>

using namespace std;

class Jefe
{
private:
    int phone;
    int head;

public:
    void set_phone(int);
    void set_head(int);
    int get_phone();
    int get_head();
    friend istream& operator >> (istream& in, Jefe& obj);
    friend ostream& operator << (ostream& out, Jefe& obj);


};



istream& operator >> (istream& in, Jefe& obj)
{
    cout << "cuantos telefonos tienes?" << endl;
    cin >> obj.phone;
    cout << "cuantos headphones tienes?" << endl;
    cin >> obj.head;

    return in;


}
ostream& operator << (ostream& out, Jefe& obj)
{
cout << obj.phone << endl;
cout << obj.head << endl;

return out;


}






int main()
{

    Jefe empleado;
    cin >> empleado;
    cout << "i will print the value of what you put" << endl;
    cout << empleado;










    return 0;
}
