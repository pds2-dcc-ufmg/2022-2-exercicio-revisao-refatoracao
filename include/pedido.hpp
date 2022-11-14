#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"
#include "pizza.hpp"
#include "hamburguer.hpp"
#include <list>
#include <string>
#include <iostream>
#include <memory>

using namespace std;

class Pedido{
    private:
        list<unique_ptr<Produto>> _produtos;

        string endereco;

    public:
        Pedido(string endereco);

        //Pizza
        void adicionar_produto(int quant, float valor, int pedacos, bool borda_recheada, string sabor);

        //Hamburguer
        void adicionar_produto(int quant, float valor, string tipo, bool artesanal);

        float calcula_total();

        void print_resumo();
};

#endif
