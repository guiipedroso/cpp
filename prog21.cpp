/*
  Title: Loop For with auto
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

  for(auto i: cantores)
    {
    std::cout << i << std::endl;
    }

  return(0);
  }
