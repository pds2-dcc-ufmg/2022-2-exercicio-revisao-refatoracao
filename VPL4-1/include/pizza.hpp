#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

#include <string>
#include <iostream>

using namespace std;

class Pizza : public Produto {
    
    private:
        int _pedacos;
        bool _bordaRecheada;
        string _sabor;
    
    public:
        Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, string sabor);
        ~Pizza();
        virtual void print() override;
};

#endif