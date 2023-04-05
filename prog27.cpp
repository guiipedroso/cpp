/*
  Title: Argc and argv (problem CPF)
  Author: Guilherme Pedroso
  Date: Apr 2023
  Updated: --
*/

#include <iostream>
#include <vector>
#include <algorithm>

int 
main( int argc, char **argv)
  {
  
  if(argc > 1)
    {
    for(int i = 1; i < argc; i++)
      {
      std:: string cpf = argv[i];  
      cpf.erase (std::remove ( cpf.begin(), cpf.end(), '.' ), cpf.end());
      cpf.erase (std::remove ( cpf.begin(), cpf.end(), '-' ), cpf.end());
      std::cout << "O CPF (" << argv[i] << ") sem pontos e traco eh " << cpf << std::endl;
      }
    }
  else 
    {
    std::cout << "Nenhum parametro foi passado" << '\n';
    }
  
  std::cout << "Quantidade de parametros passados = " << argc << '\n' ;
  std::cout << "O primeiro argumento eh: " << argv[0] << '\n';
  return(0);
  }
