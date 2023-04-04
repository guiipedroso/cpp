/*
  Title: Vector - Data Enginnering CPF
  Author: Guilherme Pedroso
  Date: Apr 2023
  Updated: --
*/

#include <vector>
#include <iostream>
#include <algorithm>

int 
main()
  {
  std::string cpf = "345.786.001-35";

  std::cout << "O nosso CPF ANTES de remover os pontos e o traco eh:  " << cpf << '\n';
  cpf.erase(std::remove( cpf.begin(), cpf.end(), '.' ));
  cpf.erase(std::remove( cpf.begin(), cpf.end(), '-' ));
  std::cout << "O nosso CPF DEPOIS de remover os pontos e o traco eh:  " << cpf << '\n';

  return(0);
  }
