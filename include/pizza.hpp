#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    private:
        int _pedacos;
        bool _isBordaRecheada;

    public:
        Pizza(int quantidade, float valorUnitario, int pedacos, bool isBordaRecheada);

        int get_pedacos();
        bool get_isBordaRecheada();

        virtual string get_sabor() = 0;

        virtual void print() override;
};

#endif