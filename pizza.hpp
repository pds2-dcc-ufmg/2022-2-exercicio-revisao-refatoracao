#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    private:
    bool borda_rech;
    int pedacos;
    public:
    Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech);
        virtual string get_sabor()=0;
        virtual void print() override;
};

#endif