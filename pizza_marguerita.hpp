#ifndef PIZZA_MARGUERITA_H
#define PIZZA_MARGUERITA_H

#include "pizza.hpp"


class Pizza_marguerita: public Pizza {

    public:
        pizza_marguerita(int q, float valor_unitario, int pedacos, bool borda_rech):
        virtual string get_sabor() override;
};

#endif
