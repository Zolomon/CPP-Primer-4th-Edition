#include <iostream>

int main()
{
  int i = 10;
  while (i >= 0) 
    std::cout << i-- << std::endl;
  
  std::cout << std::endl;
  
  for (i = 10; i >= 0; i--)
    std::cout << i << std::endl;
  
  return 0;
}