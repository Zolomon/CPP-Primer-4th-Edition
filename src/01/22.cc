#include <iostream>
#include "Sales_item.h"

int main() 
{
  Sales_item first, second;
  
  std::cout << "Enter two books in the example format: 0-201-70353-X 4 24.99"
    << std::endl;
    
  std::cin >> first >> second;
  
  std::cout << "The sum is: " << std::endl << first + second << std::endl;
  
  return 0;
}