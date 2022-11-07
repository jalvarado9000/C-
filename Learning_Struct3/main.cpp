#include <iostream>

using namespace std;

struct plants
{
string type;
string name;
int qty;
int harvestTime;

};

int main()
{
    plants x = {"blooming","letuce",20,30};

    cout << "what type of plant do is it? ";
    cout << x.type;
    cout << "what is the name of the plant";
    cout << x.name;
    cout << "what is the quantity of the plants";
    cout << x.qty;
    cout << "what is the harvest time in days? ";
    cout << x.harvestTime;







    return 0;
}
