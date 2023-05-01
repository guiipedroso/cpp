/*
  Title: Recursive fatorial
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream> //input or output 
#include <cstdlib>

using namespace std;

int fatorial(int n)
  {
  if((n == 0)||(n == 1))
    {
    return (1);
    }	  
  else
    {
    return n * fatorial(n - 1);
    }	
  }

int
main( int argc, char **argv)
  {
  if(argc > 1)
    {
    int numero = atoi(argv[1]);
    std::cout << "O valor do fatorial de " << numero << " eh " << fatorial(numero) << std::endl;
    }
  else 
    {
    std::cout << "Informe um numero." << '\n';
    }
  return(0);
  }
