#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

//Como os sabores de pizza não interferem em nada, exceto no resultado de get_sabor(), preferi unir as pizzas em uma mesma
//classe e fazer a distinção através da string _sabor.
//Isso reduziu a complexidade desnecessária de herdar da superclasse pizza apenas para mudar o resultado de uma impressão
class Pizza : public Produto
{
    const float fator_borda = 1.4;

protected:
    int _pedacos;
    bool _borda_recheada;
    string _sabor;

public:
    Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor);
    string get_sabor();
    void print() override;
};

#endif