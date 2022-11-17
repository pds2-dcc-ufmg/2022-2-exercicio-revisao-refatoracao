#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#include <list>
#include <string>
#include <iostream>
#include "produto.hpp"

using namespace std;

class pedido{
    private:
        list<produto*> _produtos;
        string _endereco;
        
    public:
        pedido(string endereco);
        void adicionaProduto(produto *p);
        float calculaTotal();
        void printResumo();

};

#endif
