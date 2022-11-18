#ifndef PEDIDO_H
#define PEDIDO_H

#include "produto.hpp"


class pedido{
    private:
        list<produto*> _produtos;
        string _endereco;
    public:
        pedido();
        pedido(string endereco);
        void adiciona_produto(produto *_produto);
        float calcula_total();
        void print_resumo();
};

#endif
