#ifndef PIZZA_MARGUERITA_H
#define PIZZA_MARGUERITA_H

#include "pizza.hpp"

class Pizza_marguerita: public Pizza {
    public:
        Pizza_marguerita(int quantidade, float valorUnitario, int pedacos, bool isBordaRecheada);

        virtual string get_sabor() override;
};

#endif