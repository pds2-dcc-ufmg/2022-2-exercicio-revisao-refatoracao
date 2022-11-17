#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

class Pizza: public Produto {
    int pedacos;
    bool borda_recheada;
    string sabor;

    public:
        Pizza(int _q, float _valor_unitario, int _pedacos, bool _borda_rech, string _sabor);;
        string get_sabor();
        void print() override;
        virtual ~Pizza();
};

#endif