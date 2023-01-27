/*
  Title: Toupper
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/

#include <iostream>

int
main()
  {
  char caractere = {'g'};
  char ascii;

  ascii = caractere;
  caractere = toupper( caractere );

  std::cout << "O valor de " <<  ascii << " maiusculo e: " << caractere << std::endl; 
  
  return(0);	  
  }
