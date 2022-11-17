#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <iostream>

class Pizza : public Produto {
    
    private:
        int _pedacos;
        bool _bordaRecheada;
        std::string _sabor;
    
    public:
        Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, std::string sabor);
        ~Pizza();

        void print() override;
};

#endif