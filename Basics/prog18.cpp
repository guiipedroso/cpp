/*
  Title: Input String
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/

#include <iostream>

int
main()
  {
  char palavra[99];
  std::cout << "Insert your name: ";
  std::cin.getline( palavra, 99);
  std::cout << "Your name is: " << palavra << std::endl;
  
  return(0);
  }
