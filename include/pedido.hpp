#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>
#include<memory>

using namespace std;

class Pedido{
    private:
        list<Produto*> _produtos;
        string _endereco;
    
    public:
        Pedido(string);

        void adiciona_produto(Produto*); 

        float calcula_total(); 

        void print_resumo();

        string get_endereco();
       

};

#endif
