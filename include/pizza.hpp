#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

class Pizza: public Produto {
    private:
        int _pedacos;
        bool _borda_recheada;

    public:
        Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech);

        virtual std::string get_sabor()=0;
        virtual void print() override;

};

#endif