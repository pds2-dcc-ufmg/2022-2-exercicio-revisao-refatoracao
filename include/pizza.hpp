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
        string _sabor;

    public:
        Pizza(int quantidade, float valorUnitario, int pedacos, bool isBordaRecheada, string sabor);

        int get_pedacos();
        bool get_isBordaRecheada();

        string get_sabor();

        void print();
};

#endif