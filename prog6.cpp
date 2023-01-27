/*
  Title: Functions
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/

#include <iostream>
//functions

void
myfunction()
  {
  std::cout << "Hello World" << std::endl;
  }

int
sum(int x, int y)
  {
  return(x+y);
  }  

int
main()
  {
  int result;
  myfunction();
  result = sum(5,8);	  
  std::cout << "X + Y = " << result << std::endl;
  
  result = sum(12,72);
  std::cout << "X + Y = " << result << std::endl;
   
  result = sum(93,76);
  std::cout << "X + Y = " << result << std::endl;

  return(0);
  }
