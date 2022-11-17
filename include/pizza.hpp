#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

class Pizza: public Produto {
    private:
        int _fatias;
        bool _borda_recheada;
        std::string _sabor;

    public:
        Pizza(int quant, float preco, int fatias, bool borda, std::string sabor);

        int get_fatias();
        bool get_borda();
        virtual void print_info();
};

#endif