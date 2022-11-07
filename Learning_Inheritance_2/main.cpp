#include <iostream>

using namespace std;

class Chef
{
public:
    void make_chicken()
    {

    cout << "the chef makes chicken" << endl;
    }

    void make_salad()
    {
    cout << "the chef makes a salad" << endl;
    }
    void makes_special()
    {
    cout << "the cheff makes a burrito" << endl;
    }


};

class Italian_Chef:public Chef
{
public:
make_pasta()
{
cout << "the italian chef makes pasta" << endl;

}
void make_chicken()
    {

    cout << "the chef does not makes chicken" << endl;
    }
};

int main()
{


    Chef obj;

    obj.make_chicken();
    Italian_Chef Italian;

    Italian.make_chicken();







    return 0;
}
