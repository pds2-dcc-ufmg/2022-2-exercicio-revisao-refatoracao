#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>



class Pizza : public Produto
{
private:
    int _pedacos;

public:
    Pizza(int q, float valor_unitario, int pedacos, bool borda_rech);
    virtual std::string get_sabor() = 0;
    int get_pedacos();
    virtual void print() override;
    bool borda_recheada;
};

#endif