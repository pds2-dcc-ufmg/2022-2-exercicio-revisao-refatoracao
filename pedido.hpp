#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"
#include "pizza.hpp"
#include "hamburguer.hpp"

#include <list>
#include <string>
#include <iostream>
using namespace std;

class Pedido{
    
    private:
        list<Produto*> _produtos
        string _endereco;
    
    public:
    
        Pedido(string endereco);
        void adicionaProduto(Produto *p){
        float calculaTotal();
        void pintResumo();
        }

};

#endif
