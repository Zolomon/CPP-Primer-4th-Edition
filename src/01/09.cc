#include <iostream>

int main() 
{
  int sum = 0;
  for (int i = -100; i <= 100; ++i) 
    sum += i;
    
  // Sum should equal 0.
  // If we add every number between -100 and 100 
  // we should get 0. 
  
  // Let's check it! 
  std::cout << "The value of 'sum' is: " << sum << std::endl; 
  
  return 0;
}