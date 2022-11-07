#ifndef PIZZA_H
#define PIZZA_H

#define TAXA_BORDA_RECHEADA 1.4f

#include "produto.hpp"

#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    protected:
        string _sabor;
        int _pedacos;
        bool _borda_recheada;
        
    public:
        Pizza(int quantidade, float valor_unitario, string sabor, int pedacos, bool borda_recheada);
        virtual ~Pizza();

        string get_sabor();
        void is_borda_recheada();
        virtual void print() override;
};

#endif