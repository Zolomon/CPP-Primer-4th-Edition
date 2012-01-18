#include <iostream>

int main() 
{
  std::cout << "Enter two numbers: " << std::endl;
  
  int lower, upper, temp; 
  std::cin >> lower >> upper;
  
  if (lower > upper) {
    temp = upper;
    upper = lower;
    lower = temp;
  }
  
  for (int i = lower; i < upper; ++i) {
    std::cout << i << " "; 
  }
  std::cout << upper << std::endl;
  
  return 0;
}