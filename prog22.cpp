/*
  Title: Pointer
  Author: Guilherme Pedroso
  Date: Apr 2023
  Updated: --
*/

#include <iostream>

using namespace std;

int 
main()
  {
  int x {425};
  int *y = &x;

  std::cout << "O valor de x eh: " << x  << std::endl;
  std::cout << "O valor do endereco de x eh: " << y  << std::endl;
  std::cout << "O valor do de y pointer eh: " << *y  << std::endl;


  return(0);
  }
