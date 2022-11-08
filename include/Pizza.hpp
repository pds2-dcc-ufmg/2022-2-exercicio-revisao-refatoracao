#ifndef PIZZA_H
#define PIZZA_H

#define TARIFA_BORDA_RECHEADA 1.4

#include "Produto.hpp"

#include <string>
#include <iostream>

using namespace std;

class Pizza : public Produto {
    public:
        Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech);

        virtual string get_sabor() = 0;

        virtual void print() override;

    private:
        int _pedacos;
        bool _borda_recheada;
};


#endif