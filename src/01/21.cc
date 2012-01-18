#include <iostream>
#include "Sales_item.h"

int main() 
{
  Sales_item transaction;
  
  while (std::cin >> transaction) 
    std::cout << transaction << std::endl;
    
  return 0;
}