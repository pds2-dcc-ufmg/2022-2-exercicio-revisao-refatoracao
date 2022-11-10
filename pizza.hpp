#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {

private:
    int pedacos;
    bool borda_recheada;
    string _sabor;

public:
    Pizza(int q, float valor_unitario, int pedacos, bool borda_rech, string sabor);
    string get_sabor();
    void print() override;
};

#endif