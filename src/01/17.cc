#include <iostream>

int main() 
{
  std::cout << "Enter a series of numbers:" << std::endl;
  int val, count;
  while(std::cin >> val) {
    std::cout << "Number was: " << val << std::endl;
    if (val < 0)
      ++count;
  }
  std::cout << "You entered " << count << " negative numbers." << std::endl;
  
  return 0;
}