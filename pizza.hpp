#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

class Pizza: public Produto {
    public:
        Pizza(string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_rech);
        string getSabor();
        int getPedacos();
        bool getBordaRecheada();
        virtual void print_info() override;
    
    private:
        string _sabor;
        int _pedacos;    
        bool _borda_recheada;
        const float _TAXA_BORDA_RECHEADA = 1.4;
};

#endif