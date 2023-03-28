/*
  Title: Input - String
  Author: Guilherme Pedroso
  Date: Mar 2023
  Updated: --
*/

#include <iostream>

using namespace std;

int 
main()
  {
  char email[99];

  std::cout << "Entre com um email: ";
  std::cin.getline(email, 99);
  std::cout << email << std::endl;

  return(0);
  }
