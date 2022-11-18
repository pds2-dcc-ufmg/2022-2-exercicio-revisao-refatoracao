#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    private:

        int _pedacos;
        
        bool _isBordaRecheada;
    
    public:
        Pizza(int q, float valor_unitario, int pedacos, bool borda_rech);

        virtual string get_sabor()=0;

        virtual void print();

        int get_pedacos();

        bool get_isBordaRecheada();


};

#endif