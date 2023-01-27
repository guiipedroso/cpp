/*
  Title: Static_cast
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/


#include <iostream>

int
main()
  {
  double other = 11.56;
  int number = static_cast<int>(other);
  other = static_cast<double>(other);

  std::cout << "other value is  " << other << '\n';
  std::cout << "number value is " << number << '\n';
  
  return(0);
  }
