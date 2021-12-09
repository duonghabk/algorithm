#ifndef VENDINGMACHINE_H_
#define VENDINGMACHINE_H_


#include <iostream>
#include <list>
#include "Item.h"
using namespace std;
class VendingMachine
{
private:
    /* data */
public:
    VendingMachine(/* args */);
    ~VendingMachine();
    long seclectItemAndGetPrice(Item item);
    void insertCoin(Coin coin);
    list<Coin> refund();
    //Bucket<Item, List<Coin>> collectItemAndChange();
    void reset();
};

#endif

