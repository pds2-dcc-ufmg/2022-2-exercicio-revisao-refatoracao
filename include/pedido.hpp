#ifndef PEDIDO_H
#define PEDIDO_H

#include "produto.hpp"
#include <list>
using namespace Cardapio;

class Pedido{
    private:
        list<Produto*> _produtos;
        string _endereco;
    
    public:
        Pedido(string endereco);
        void adiciona_produto(Produto *p);
        float calcula_total();
        void print_resumo();
};

#endif
