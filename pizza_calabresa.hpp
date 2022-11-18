#ifndef PIZZA_CALABRESA_H
#define PIZZA_CALABRESA_H

#include "pizza.hpp"

class PizzaCalabresa: public Pizza {
    public:
        PizzaCalabresa(int quantidade, float valor_unitario, int pedacos, bool borda_rech);
};

#endif