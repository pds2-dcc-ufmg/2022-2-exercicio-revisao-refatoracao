#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"
#include "pizza.hpp"
#include "hamburguer.hpp"

#include <list>
#include <string>
#include <iostream>

class Pedido{
    private:
        std::list<Produto*> _produtos;
        std::string _endereco;

    public:
        Pedido(std::string endereco);

        std::list<Produto*> get_produtos();
        void adicionar_produto(Produto *p);
        float calcular_total();
        void print_resumo();
};

#endif