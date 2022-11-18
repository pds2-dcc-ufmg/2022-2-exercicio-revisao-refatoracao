#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    public:
        int _pedacos;
        bool _borda_recheada;
        string _sabor;

        Pizza(string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_recheada);
        virtual void print() override;  
};

#endif