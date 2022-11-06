#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    public:
        Pizza(int quantidade, float valor_unitario, string sabor, int pedacos, bool borda_recheada);
        
        string get_sabor();

        virtual void print() override;

    private:
        string _sabor;
        int _pedacos;
        bool _borda_recheada;
        float _taxa_borda = 1.4;
};

#endif