#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>
#include <memory>

using namespace std;

class Pedido{
    private:
        string _endereco;
        list<shared_ptr<Produto>> _produtos;

    public:
        Pedido(string endereco);

        float calcula_total();
        void adiciona_produto(shared_ptr<Produto> produto);
        void print_resumo();
};

#endif
