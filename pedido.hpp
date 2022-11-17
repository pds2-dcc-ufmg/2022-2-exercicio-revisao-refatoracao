#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#include "produto.hpp"

class Pedido{

    list<Produto*> produtos;
    string endereco;

    public:
        Pedido(string endereco);
        void adiciona_produto(Produto *p);
        float calcula_total();
        void print_resumo();
        virtual ~Pedido();

};

#endif
