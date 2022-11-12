#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>


class Pedido
{
public:
    Pedido(std::string endereco);

    void adiciona_produto(Produto *p);

    float calcula_total();

    void print_resumo();

private:
    std::list<Produto *> _produtos;
    std::string _endereco;
};

#endif