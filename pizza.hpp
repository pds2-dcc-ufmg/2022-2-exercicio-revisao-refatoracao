#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"


class pizza: public produto {
    private:
        int pedacos;
        bool borda_recheada;
        string sabor;
    public:
        pizza();
        pizza(int _quantidade, float valor_unitario, int pedacos, bool borda_rech, string _sabor);
        virtual void print() override;
};

#endif