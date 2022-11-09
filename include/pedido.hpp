#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>


class Pedido{
    private:
        std::list<Produto*> _produtos;
        std::string _endereco;

    public:
        Pedido(std::string endereco);
        ~Pedido();	

        void adiciona_produto(Produto *produto);
        float calcula_total();
        void print_resumo();

};

#endif
