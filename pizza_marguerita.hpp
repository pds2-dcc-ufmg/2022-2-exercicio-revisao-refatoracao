#ifndef PIZZA_MARGUERITA_H
#define PIZZA_MARGUERITA_H

#include "pizza.hpp"


class pizza_marguerita: public pizza {
    public:
        pizza_marguerita(int q, float valor_unitario, int pedacos, bool borda_rech): pizza(q, valor_unitario, pedacos, borda_rech){get_sabor();}
        virtual string get_sabor() override{
            return "Marguerita";
        }
};

#endif