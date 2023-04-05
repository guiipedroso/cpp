/*
  Title: Argc and argv
  Author: Guilherme Pedroso
  Date: Apr 2023
  Updated: --
*/

#include <iostream>

int 
main( int argc, char **argv)
  {
  
  if(argc > 1)
    {
	    std::cout << "O primeiro parametro passado eh: " << argv[1] << std::endl;
    }
  else 
    {
	    std::cout << "Nenhum parametro foi passado" << '\n';
    }
  
  std::cout << "Quantidade de parametros passados = " << argc << '\n' ;
  std::cout << "O primeiro argumento eh: " << argv[0] << '\n';
  return(0);
  }
