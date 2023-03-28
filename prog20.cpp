/*
  Title: Loop For
  Author: Guilherme Pedroso
  Date: Mar 2023
  Updated: --
*/

#include <iostream>

using namespace std;

int 
main()
  {

  std::string cantores[] = {"Luan Santana", "Mano Brown", "Matue"};

  for(int i = 0; i < 3; i++)
    {
    std::cout << "O " << i+1 << " eh " << cantores[i] << std::endl;
    }

  return(0);
  }
