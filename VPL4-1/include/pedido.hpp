#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"
#include <list>
#include <iostream>

class Pedido {
    
    private:
        std::list<Produto*> _produtos;
        std::string _endereco;    
    
    public:
        Pedido(std::string endereco);
        ~Pedido();
        
        void adicionarProduto(Produto* p);
        float calcularTotal();
        void printResumo();
};

#endif
