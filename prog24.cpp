/*
  Title: Vector (Push e Pop back)
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
  languages.push_back("Bash");
  languages.pop_back();
  std::vector<std::string>::iterator fim = languages.end();
  std::cout << "O ultimo elemento do vector eh : " << *fim << std::endl;
  std::cout << "O tamanho do vector eh : " << languages.size() << std::endl;

  return(0);
  }
