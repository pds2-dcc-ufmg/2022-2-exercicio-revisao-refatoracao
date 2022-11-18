#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    private:
        int pedacos;
        bool borda_recheada;
        string sabor;

    public:
        Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor);
        
        virtual void print() override;

        string get_sabor();
};

#endif