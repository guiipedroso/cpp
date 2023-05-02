/*
  Title: Static 
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream> //input or output 

using namespace std;

void
increment_e_print()
  {
  static int value { 1 };
  ++value;
  std::cout << value << '\n';
  }

int
main(int argc, char **argv)
  {
  increment_e_print();
  increment_e_print();
  increment_e_print();

  return(0);
  }
