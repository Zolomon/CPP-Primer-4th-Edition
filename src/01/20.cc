#include <iostream>

int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  
  int first, second;
  std::cin >> first >> second;
  
  int sum = 0;
  for (int i = first; i <= second; ++i)
    sum += i;
  
  // Since first will be equal to 7 and second 3, the for loop 
  // will fail on the first condition check and the body will never be 
  // execute, thus the sum will always be the same as its initialised value.
  std::cout << "The sum is " << sum << std::endl;
  
  return 0;
}