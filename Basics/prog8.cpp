/*
  Title: function int
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/


#include <iostream>

int 
product(int x, int y);

int 
main()
  {
  std::cout << "O valor de 22 vezes 8: " << product(22,8) << std::endl;
  
  
  }

int 
product(int x, int y)
  {
  return(x*y);
  }
