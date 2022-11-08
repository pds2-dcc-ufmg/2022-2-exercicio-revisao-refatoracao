#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <iostream>
#include <list>
#include <string>

#include "Produto.hpp"

using namespace std;

class Pedido {
   private:
    list<Produto *> _produtos;
    string _endereco;

   public:
    Pedido(string endereco);

    void adicionaProduto(Produto *p);

    float calcula_total();

    void print_resumo();

    string getEndereco();
};

#endif
