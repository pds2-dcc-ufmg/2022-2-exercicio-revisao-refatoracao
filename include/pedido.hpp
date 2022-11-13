#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"
#include "pizza.hpp"
#include "hamburguer.hpp"

#include <list>
#include <memory>
#include <string>
#include <iostream>

class Pedido {
    private:
        std::list<std::unique_ptr<Produto>> _produtos;
        std::string _endereco;
        
    public:
        Pedido(std::string endereco);

        // Overload hamburguer
        void adicionaProduto(int quantidade, float valorUnitario, std::string tipo, bool artesanal);

        // Overload pizza
        void adicionaProduto(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, std::string sabor);

        float calculaTotal();

        void printResumo();
};

#endif
