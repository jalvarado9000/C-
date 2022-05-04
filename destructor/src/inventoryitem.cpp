#include "inventoryitem.h"
#include <string>
#include <iostream>
using namespace std;

    void InventoryItem:: set_description(string d){description = d;}
    void InventoryItem:: set_cost(double c){cost = c;}
    void InventoryItem:: set_unit(int u){unit = u;}
    string InventoryItem:: get_description(){return description;}
    double InventoryItem::get_cost(){return cost;}
    int InventoryItem::get_unit(){return unit;}
