#ifndef PEDIDO_H
#define PEDIDO_H

#include "produto.hpp"
#include <list>
#include <string>
#include <iostream>

using namespace std;

class Pedido
{
private:
    list<Produto *> _produtos;
    string _endereco;

public:
    Pedido(string endereco);
    void adicionar_produto(Produto *produto);
    float valor_total();
    void print_resumo();
};

#endif
