#include <iostream>

int main() 
{
  std::cout << "Enter two numbers:" << std::endl;
  int left, right;
  std::cin >> left >> right;
  if (left < right) {
    std::cout << right << std::endl;
    return 0;
  } else if (left > right) {
    std::cout << left << std::endl;
    return 0;
  }
  
  std::cout << "They are equal." << std::endl;
  
  return 0;
}