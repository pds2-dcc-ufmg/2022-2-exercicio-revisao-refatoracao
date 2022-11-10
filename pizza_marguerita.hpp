#ifndef PIZZA_MARGUERITA_H
#define PIZZA_MARGUERITA_H

#include "pizza.hpp"


class Pizza_marguerita: public Pizza {

    public:

        Pizza_marguerita(int quantidade, float valor_unitario, int pedacos, bool borda_rech): Pizza(quantidade, valor_unitario, pedacos, borda_rech) {}

        virtual string get_sabor() override {
            return "Marguerita";
        }

};

#endif
