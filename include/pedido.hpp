#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>

using namespace std;

class Pedido{
    private:
        list<Produto*> _produtos;
        string _endereco;

    public:
        Pedido(string endereco);

        list<Produto*> get_produtos();
        string get_endereco();

        void adiciona_produto(Produto *produto);
        float calcula_total();

        void print_resumo();
};

#endif