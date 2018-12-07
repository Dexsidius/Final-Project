#ifndef STORE_H
#define STORE_H

#include <string>

using namespace std;

class Store{
private:
  string itemName;
  double price;


public:
  Store(string, double);
  void setItemName(string);
  void setPrice(double);
  void getItemName() const;
  double getPrice() const;

#endif
