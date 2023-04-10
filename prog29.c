/*
  Title: Challenge Float
  Author: Guilherme Pedroso
  Date: Apr 2023
  Updated: --
*/

#include <iostream>

int
main( int argc, char **argv)
  {
  float num;	  
  std::cout << "Insira um numero: ";
  std::cin >> num;
  std::cout << "Parte inteira eh " << (num -(num - (int)num))  << " e parte fracionaria eh " << (num - (int)num) << std::endl; 
 
  return(0);
  }

