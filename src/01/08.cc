#include <iostream>

int main() 
{
  std::cout << "/*";
  std::cout << "*/";
  //std::cout << /* "*/" */;
  std::cout << /* "*/ "this works at least" /* */ << std::endl;
  /*
  *  ☁  01 [master] rm a.out;g++ 08.cc && ./a.out
  * rm: a.out: No such file or directory
  * 08.cc:7:22: warning: missing terminating " character
  * 08.cc:7: error: missing terminating " character
  * 08.cc: In function 'int main()':
  * 08.cc:9: error: expected primary-expression before 'return'
  * 08.cc:9: error: expected `;' before 'return'
  */
  
  return 0;
}