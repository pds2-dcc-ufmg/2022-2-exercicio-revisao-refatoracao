#ifndef PIZZA_CALABRESA_H
#define PIZZA_CALABRESA_H

#include "pizza.hpp"


class Pizza_calabresa: public Pizza {
    public:
        Pizza_calabresa(int quantidade, float valorUnitario, int pedacos, bool isBordaRecheada);

        virtual string get_sabor() override;
};

#endif