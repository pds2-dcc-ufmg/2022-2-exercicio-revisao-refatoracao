#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class pizza : public produto {
    public:
    pizza(int quant, float valor_unitario, int pedacos, bool borda_rech): produto(quant, valor_unitario), pedacos(pedacos), borda_recheada(borda_rech) {}
    
        int pedacos;
        bool borda_recheada;
        
        virtual string get_sabor()=0;
        
        virtual void print() override{
            cout << "Pizza de " << get_sabor() << endl;
            cout << "\tQuantidade: " << quant << endl;
            cout << "\tValor Unitario: " << valorUnitario << endl;
            cout << "\tPedacos: " << pedacos << endl;
            if (borda_recheada) cout << "\tBorda Recheada" << endl;
        }

        
};

#endif