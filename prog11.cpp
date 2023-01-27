/*
  Title: casting
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/

#include <iostream>

int 
main()
  {
  int variable;
  double d = 3.156;  
  
  variable = (int) d;

  std::cout << "Casting the 3.1456 for int is " << variable << std::endl; 
  return(0);
  }
