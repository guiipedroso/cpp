/*
  Title: Pointer function / Const Function
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream> //input or output 

using namespace std;

void funcao()
  {
  std::cout << "Funcao do tipo void sem parametros\n" << std::endl;
  }
int funcao(int x)
  {
  std::cout << "Funcao do tipo void com parametros\n" << std::endl;
  return x;
  }

std::string
funcao (std::string forname, std::string surname)
  {
  std::string nome_completo = forname+" "+surname; 
  return nome_completo;
  }

std::string
*funcao (std::string *forname)
  {
  return forname;
  }

const int
funcao(int x, int y)
  {
  return x + y;
  }

int
main()
  {
  funcao();
  funcao(8);
  std::string forname {"Guilherme"}, surname {"Pedroso"};
  std::cout << *funcao(&forname) << std::endl;

//  std::cout << funcao("Guilherme","Pedroso") << std::endl;

  const int v1 = 8, v2 = 5;

  std::cout << "Funcao com constante: " << funcao(v1,v2) << '\n';

  return(0);
  }
