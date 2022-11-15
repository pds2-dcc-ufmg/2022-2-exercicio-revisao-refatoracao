#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

class Pizza: public Produto {

    public:
        Pizza(int quantidade_pizza, float valor_unitario, int pedacos, bool borda_recheada, string sabor_pizza);
        void print() override;

        int get_pedacos();
        bool get_borda_recheada();
        string get_sabor_pizza();

    private:
        string _sabor_pizza;
        bool _borda_recheada;
        int _pedacos;


};

#endif