#include <iostream>

int main() 
{
  std::cout << "Enter two numbers:" << std::endl;
  
  int v1, v2;
  std::cin >> v1 >> v2; // read input
  
  int lower, upper;
  if (v1 <= v2) {
    lower = v1;
    upper = v2;
  } else {
    lower = v2;
    upper = v1;
  }
  
  int sum = 0;
  // sum values from lower up to and including upper
  for (int val = lower; val <= upper; ++val)
    sum += val;
  
  std::cout << "Sum of " << lower
            << " to " << upper
            << " including is "
            << sum << std::endl;
  
  return 0;
}