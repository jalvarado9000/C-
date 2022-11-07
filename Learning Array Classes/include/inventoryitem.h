#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>
#include <iostream>

using namespace std;

class InventoryItem
{
private:
    string description;
    double cost;
    int unit;

public:
    InventoryItem()
    {
    description = "";
    cost = 0.0;
    unit = 0;
    }

    InventoryItem(string desc)
    {
    description = desc;
    cost = 0.0;
    unit = 0;

    }

    InventoryItem(string desc, double c, int u)
    {
    description = desc;
    cost = c;
    unit = u;

    }

    void set_description(string);
    void set_cost(double);
    void set_unit(int);
    string get_description();
    double get_cost();
    int get_unit();




};

#endif // INVENTORYITEM_H
