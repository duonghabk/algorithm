#include "Inventory.h"


int Inventory::getQuantity(Type item)
{
    return m_inventory[item];
}
void Inventory::add(Type item)
{
    ++m_inventory[item];

}
bool Inventory::hasItem(Type item)
{
    return getQuantity(item)>0;
}
void Inventory::clear()
{
    m_inventory.clear();
}
void Inventory::put(Type item, int quantity)
{
    m_inventory[item] = quantity;
}