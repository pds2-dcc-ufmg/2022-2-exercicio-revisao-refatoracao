#ifndef PIZZA_H
#define PIZZA_H

#define TARIFA_BORDA_RECHEADA 1.4  /*Tarifa se a borda for recheada*/

#include "Produto.hpp"

#include <string>
#include <iostream>

using namespace std;


class Pizza : public Produto {
    public:
        Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor);

        string get_sabor();

        void adicionar_tarifas() override; 

        virtual ~Pizza();                     

        virtual void print() override;

    private:
        int _pedacos;
        bool _borda_recheada;
        string _sabor;
};


#endif