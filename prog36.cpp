/*
  Title: Enum 
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream>

enum Cores
  {
  red,
  green = 16,
  blue  
  };

enum Saidas
  {
  sucesso,
  erro_ao_abrir,
  erro_de_leitura,
  erro_de_permissao,
  erro_de_escrita
  };

int
main(int argc, char **argv)
  {
  Cores cores;
  std::cout << "O valor da cor red eh " << red << '\n';
  std::cout << "O valor da cor blue eh " << blue << '\n'; 
  return(0);
  }
