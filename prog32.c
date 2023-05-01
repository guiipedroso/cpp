/*
  Title: Recursive Fibonacci
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream> //input or output 
#include <cstdlib>

using namespace std;

int
fatorial(int n)
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
fibonacci(int num)
  {
  return (num <= 1) ? 1: fibonacci (num -1 ) + fibonacci (num - 2);
  }

int
main( int argc, char **argv)
  {
  if(argc > 1)
    {
    int numero = atoi(argv[1]);
    //std::cout << "O valor do fatorial de " << numero << " eh " << fatorial(numero) << std::endl;
    std::cout << "A sequencia fibonacci do numero "  << numero << " eh " << '\n';
    int i = 0;
    while( i < numero)
      {
      std::cout << " " << fibonacci(i);
      i++;
      }
    std::cout << '\n';
    }  
  else
    {
    std::cout << "Informe um numero." << '\n';
    }
  return(0);
  }
