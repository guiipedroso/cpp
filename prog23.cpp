/*
  Title: Vector
  Author: Guilherme Pedroso
  Date: Apr 2023
  Updated: --
*/

#include <vector>
#include <iostream>

int 
main()
  {
  std::vector<std::string> languages = {"C#", "C++", "Python", "Java", "Shell Script"};
  std::vector<std::string>::iterator inicio = languages.begin();
  std::cout << "O primeiro elemento do vector eh : " << *inicio << std::endl;


  return(0);
  }
