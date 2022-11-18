#ifndef TIPO_PIZZA_H
#define TIPO_PIZZA_H

#include "pizza.hpp"


class pizza_marguerita : public pizza {
    public:
        pizza_marguerita(int quant, float valor_unitario, int pedacos, bool borda_rech): pizza(quant, valor_unitario, pedacos, borda_rech) {get_sabor();}
        
        virtual string get_sabor() override{
            return "Marguerita";
        }
};


class pizza_calabresa : public pizza {
    public:
        pizza_calabresa(int quant, float valor_unitario, int pedacos, bool borda_rech): pizza(quant, valor_unitario, pedacos, borda_rech) {}
        
        virtual string get_sabor() override{
            return "Calabresa";
        }
};

#endif