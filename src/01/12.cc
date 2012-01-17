#include <iostream>

int main() 
{
  std::cout << "The two different types of loops can be used for the same things."  << std::endl << std::endl;
  
  std::cout << "/While/ loops tend to be suitable for iteration with a condition that doesn't really arise from improvement upon a control variable.  "  << std::endl << std::endl;

    std::cout << "While a /for/ loop tends to be for incremental improving of a control variable, like advancing an iterator, incrementing a counter, following a chain of pointers."  << std::endl << std::endl;
  
  std::cout << "With a /for/ loop, you gain the ability to define a variable with a scope that encompasses the whole loop, but not more."  << std::endl << std::endl;
  
  std::cout << "With a /while/ loop, you don't need the syntactic cruft of the first and third clause of a /for/ loop."  << std::endl << std::endl;
  
  std::cout << "In the end, they tend to have slighlty different manings to a reader, and if you use the wrong one, you'll make the code harder to read." << std::endl;
  
  // Thanks to Zao@#gamedev.afternet.net for explaining further!
  
  return 0;
}