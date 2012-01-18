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
  
  int nbrsPerLine = 10;
  for (int i = lower; i < upper; ++i) {
    std::cout << i << " "; 
    if ((++nbrsPerLine % 10) == 0)
      std::cout << std::endl;
  }
  std::cout << upper << std::endl;
  
  return 0;
}