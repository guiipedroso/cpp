/*
  Title: Arrays functions
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/

#include <iostream>

void
recebe_array(int arr[])
  {
  arr[3] = 88;  
  }

int
main()
  {
  int numbers[] = {44,11,25,66,11};
  std::cout << "O valor da posicao 3 antes da funcao" << numbers[3];
  recebe_array(numbers);
  std::cout << "O valor da posicao 3 depois da funcao " << numbers[3] << std::endl;
  return(0);
  }

