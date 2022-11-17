#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>



class Pizza : public Produto
{
private:
    int _pedacos;
    std::string _sabor;

public:
    Pizza(std::string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_rech);
    std::string get_sabor();
    int get_pedacos();
    virtual void print() override;
    bool borda_recheada;
};

#endif