#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>
using namespace std;

class Pedido {
    public:
        Pedido(string endereco);

        void adiciona_produto(Produto *p);

        float calcula_total();

        void print_resumo();

    private:
        list<Produto*> _produtos;
        string _endereco;
        

};

#endif
