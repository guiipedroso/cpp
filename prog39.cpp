/*
  Title: Shell with C++
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream> //input or output 
#include <cstdlib>

using namespace std;

int
main(int argc, char **argv)
  {
  std::string home = getenv("HOME");	
  std::string shell = getenv("SHELL");  

  std::cout << "O caminho da sua $HOME eh: " << home << '\n';
  std::cout << "O seu $SHELL padrao eh: " << shell << '\n';
  std::cout << "USUARIO: " << getenv("USER") << '\n'; 
  
  system("echo TMJ");
   
  return(0);
  }
