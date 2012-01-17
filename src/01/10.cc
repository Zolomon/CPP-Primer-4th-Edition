#include <iostream>

int main() 
{
  int i, sum = 0;
  for(i = 50; i <= 100; ++i) 
    sum += i;
    
  std::cout << "The sum of every number between 50 and 100 inclusive is: "
    << sum << std::endl;
    
  sum = 0;
  i = 50;
  while(i <= 100)
    sum += i++;
  
  std::cout << "The sum of every number between 50 and 100 inclusive is: "
    << sum << std::endl;
  
  return 0;
}