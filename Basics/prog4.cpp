/*
  Title: Strings
  Author: Guilherme Pedroso
  Date: Jan 2023
  Updated: --
*/

/* variable
 *
 * char     |  8bits | -128  127 
 * bool	    |  8bits | true or false 
 * int      | 16bits | -2.147.483.647 a 2.147.483.647
 * float    | 32bits | 7 digitos significativos 
 * double   | 64bits | digitos significativos
 *
 */

#include <iostream>

using namespace std;

int
main()
  {
  int x = 0;
  std::cout << "O valor de x antes eh: " << x << '\n';
  x = 12;
  cout << "O valor de x depois eh: " << x << endl;
  std::string word= "Brazilian Guilherme";
  cout << "Nationality/Nome: " <<  word << endl;
  
  return(0);
  }

