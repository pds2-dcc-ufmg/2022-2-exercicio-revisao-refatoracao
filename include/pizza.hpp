#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

#include <string>
#include <iostream>

class Pizza : public Produto {
    private:
        int _pedacos;
        bool _bordaRecheada;
        std::string _sabor;

    public:
        Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, std::string sabor);
        
        std::string getSabor();

        virtual void print() override;
};

#endif
