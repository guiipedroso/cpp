/*
  Title: File - Read 
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream>
#include <fstream>

using namespace std;

int
main(int argc, char **argv)
  {
  std::string linha;
  bool numero {false};
  std::string param;
  int i = 0;

  if(argc > 1)
    {
    param = argv[1];
    if(param == "--numero" || param == "-n")
      {
      numero = true;
      }
    }

  ifstream arquivo("arquivo.txt");

  if( arquivo.is_open())
    {
    while(getline(arquivo, linha))
      {
      if(numero)
        {
        std::cout << i << " " << linha << '\n';
        i++;
        }
      else
        {
        std::cout << linha << '\n';
        }
      }
    arquivo.close();
    }
  else
    {
    std::cout << "Erro ao abrir arquivo" << std::endl;
    }

  return(0);
  }
