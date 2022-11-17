#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"


class pizza: public produto {
    private:
        bool borda_recheada;
        int pedacos;
        std::string sabor;
    public:
     pizza(int _quantidade, float valor_unitario, int pedacos, bool borda_rech, std::string _sabor): 
     produto(_quantidade, valor_unitario), pedacos(pedacos), borda_recheada(borda_rech), sabor(_sabor){}
        virtual void print() override{
            std::cout << "Pizza de " << sabor << std::endl;
            std::cout << "\tQuantidade: " << get_quantidade() << std::endl;
            std::cout << "\tValor Unitario: " << get_valor_unitario() << std::endl;
            std::cout << "\tPedacos: " << pedacos << std::endl;
            if (borda_recheada) {
                std::cout << "\tBorda Recheada" << std::endl;
            }
        } 
};

#endif