#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"
#include <list>
#include <string>

#include <iostream>

using namespace std;

class Pedido {
    
    private:
        list<Produto*> _produtos;
        string _endereco;    
    
    public:
        Pedido(string endereco);
        ~Pedido();
        void adicionarProduto(Produto* p);
        float calcularTotal();
        void printResumo();
};

#endif
