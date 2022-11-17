#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class pizza: public produto {
    protected:
        int _pedacos;
        bool _borda_recheada;
        string _sabor;
    public:
        pizza(int quantidade, float valorUnitario, int pedacos, string sabor, bool borda_rech);
        virtual void print() override;
};

#endif