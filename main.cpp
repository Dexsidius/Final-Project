#include "Store.h"
#include "LuckyStore.h"
#include "Customer.h"
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

void getItemAndCost(int x);

int main(){
  fstream dataFile;
  string line;
  int value;
  int total_cost;
  int num_of_items;
  string item;
  double cost;
  int queueLen;
  int item_total;

  LuckyStore Lucky;


  cout << "Hello welcome to the LuckyStore! Here is what we have in stock: " << endl;
  Lucky.retrieve_inventory();
  Lucky.display_inventory();


return 0;
}





    // need help attacting cost to the item. i think we should use a dictionary but i dont know how to use them
