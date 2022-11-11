#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>
#include <memory>

using namespace std;

class Pedido {

    private:

        list<shared_ptr<Produto>> _produtos;
        string _endereco;

    public:

        Pedido(string endereco);

        void adiciona_produto(shared_ptr<Produto> p);

        float calcula_total();

        void print_resumo();    

};

#endif
