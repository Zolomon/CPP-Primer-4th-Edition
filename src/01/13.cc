#include <iostream>

//int main( // error
//{ // error
int main() 
{
  // 13.cc:4: error: expected primary-expression before '{' token
  // 13.cc:8: error: expected ',' or ';' at end of input
  
  // std::cout << "Read each file. " << std::endl:
  // 13.cc: In function 'int main()':
  // 13.cc:10: error: expected `;' before ':' token
  std::cout << "Read each file. " << std::endl;
  
  // std::cout << Update master. << std::endl;
  // 13.cc: In function 'int main()':
  // 13.cc:15: error: 'Update' was not declared in this scope
  // 13.cc:15: error: expected `;' before 'master'
  std::cout << "Update master. " << std::endl;
  
  // int age = "24";
  // 13.cc:21: error: invalid conversion from 'const char*' to 'int'
  int age = 24;
  
  // int a,b,d;
  // std::cin >> a >> b >> c >> d;
  // 13.cc: In function 'int main()':
  // 13.cc:29: error: 'c' was not declared in this scope
  int a,b,c,d;
  std::cin >> a >> b >> c >> d;
  
  return 0;
}