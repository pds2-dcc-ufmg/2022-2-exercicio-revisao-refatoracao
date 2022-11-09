#ifndef PIZZA_CALABRESA_H
#define PIZZA_CALABRESA_H

#include "pizza.hpp"


class Pizza_calabresa: public Pizza {
    public:
        Pizza_calabresa(int quantidade, float valor_unitario, int pedacos, bool borda_rech);
        
        virtual std::string get_sabor() override;

};

#endif