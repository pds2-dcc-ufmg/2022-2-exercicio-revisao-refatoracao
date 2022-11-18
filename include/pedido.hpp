#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <iostream>
#include <list>
#include <string>
using namespace std;

class Pedido {
	private:
		list<Produto *> _produtos;
		string _endereco;
	public:
		Pedido(string endereco);
		void adiciona_produto(Produto *produto);
		float calcula_total();
		void print_resumo();
};

#endif
