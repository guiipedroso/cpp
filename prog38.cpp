/*
Title: File - Write
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream> //input or output 
#include <fstream>

using namespace std;

int
main(int argc, char **argv)
  {
  std::string conteudo, outro;

  std::ofstream arquivo; 

  arquivo.open("arquivo2.txt", std::ios_base::app); //esse segundo parametro faz com que nao se apague os dados existentes no arquivo

  std::cout << "Informe uma linha: ";
  std::getline(std::cin, conteudo);
  std::cout << "Informe uma outra linha: ";
  std::getline(std::cin, outro);

  arquivo << conteudo << '\n';
  arquivo << outro << '\n';

  arquivo.close();

  std::cout << "Dados gravados com sucesso!" << '\n';

  return(0);
  }
