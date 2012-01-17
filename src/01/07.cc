#include <iostream>

int main() 
{
  
  /*
  *  ☁  01 [master] rm a.out;g++ 07.cc && ./a.out                              
  * rm: a.out: No such file or directory
  * 07.cc: In function 'int main()':
  * 07.cc:5: error: expected `;' before 'comment'
  */
  
  std::cout /* This is a /*This is a nested comment*/ comment */ 
    << "And you can see the error with Syntax Highlighting turned on." 
    << std::endl;
    
  return 0;
}