#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

private:
string itemName;
int itemPrice;
int itemQuantity;

public:
string GetName();
int GetPrice();
int GetQuantity();
void SetName();
void SetPrice();
void SetQuantity();

#endif
