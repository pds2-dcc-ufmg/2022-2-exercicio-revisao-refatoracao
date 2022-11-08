#ifndef PIZZA_CALABRESA_H
#define PIZZA_CALABRESA_H

#include "Pizza.hpp"


class PizzaCalabresa: public Pizza {
    public:
        PizzaCalabresa(int q, float valor_unitario, int pedacos, bool borda_rech);
        
        virtual string get_sabor() override;
};

#endif