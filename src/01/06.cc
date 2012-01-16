#include <iostream>

int main() 
{
  int v1, v2;
  
  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> v1 >> v2;
  
  // Is this code legal? 
  std::cout << "The sum of " << v1;
  << " and " << v2;
  << " is " << v1 + v2
    << std::endl;
    
  /*
  * No, it is not. On row 11 there is no left-hand operand, no 
  * instance of an output stream object, so there is nothing to 
  * output the right-hand value to, and the next operator won't 
  * have anything to output to either so the error is chained. 
  * Same for row 13 and 14. This should not compile.
  */  
  
  /* And it doesn't: 
  *  ☁ 01 [master] rm a.out; g++ 06.cc && ./a.out
  * 06.cc: In function 'int main()':
  * 06.cc:12: error: expected primary-expression before '<<' token
  * 06.cc:13: error: expected primary-expression before '<<' token
  */
    
  return 0;
}