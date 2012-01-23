#include <iostream>
#include "Sales_item.h"

int main() 
{
  Sales_item transaction, sum;
  
  std::cout << "Enter book transaction to sum: " << std::endl;
  
  while (std::cin >> transaction)
    sum += transaction;
    
  std::cout << "The sum is: " << sum << std::endl;
  
  return 0;
}