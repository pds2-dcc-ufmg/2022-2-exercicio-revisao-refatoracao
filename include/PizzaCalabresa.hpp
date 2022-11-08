#ifndef PIZZA_CALABRESA_H
#define PIZZA_CALABRESA_H

#include "Pizza.hpp"

class PizzaCalabresa : public Pizza {
   public:
    PizzaCalabresa(int quantidade, float valor_unitario, int pedacos, bool is_borda_rech);

    virtual string getSabor() override;
};

#endif