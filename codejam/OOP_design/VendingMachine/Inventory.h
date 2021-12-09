#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <iostream>
#include <map>
#include "Item.h"

using namespace std;
template <class Type>
class Inventory
{
private:
    /* data */
    map<Type,int> m_inventory;
public:
    Inventory():m_inventory(){};
    ~Inventory();
    void add(Type item);
    int getQuantity(Type item);
    void deduct(Type item);
    bool hasItem(Type item);
    void clear();
    void put(Type item, int quantity);
};


#endif