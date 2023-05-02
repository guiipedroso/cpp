/*
  Title: Struct
  Author: Guilherme Pedroso
  Date: May 2023
  Updated: --
*/

#include <iostream> //input or output 

using namespace std;

struct
cliente 
  {
  std::string nome; 
  std::string sobrenome;
  int matricula; 
  };

void 
show_data( struct cliente c)
  {
  std::cout << "\n\e[5m:::: DADOS DO CLIENTE ::::"  << "\e[m\n";
  std::cout << c.nome << " " << c.sobrenome << " - \e[33;1m" << c.matricula << "\e[m\n";
  }

struct
cliente get_data()
  {
  struct cliente c; 
  std::cout << "Informe o nome do cliente: ";
  std::getline( std::cin, c.nome);

  std::cout << "Informe o sobrenome do cliente: ";
  std::getline( std::cin, c.sobrenome);

  std::cout << "Informe n da matricula do cliente: ";
  std::cin >> c.matricula;

  return c;
  }

int
main()
  {
  std::cout << "\n:::: CADASTRO DE CLIENTE ::::"  << '\n';
  struct cliente dados_cliente;
  dados_cliente = get_data();
  show_data(dados_cliente);
  return(0);
  }
