#include "Customer.h"
#include <iostream>

using namespace std;

void Store::setItemName(string i){
  itemName = i;
}

void Store::setPrice(double p){
  price = p;
}

string Store::getItemName() const{
  return itemName;
}

double Store::getPrice() const{
  return price;
}
