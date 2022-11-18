#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>

#include "Produto.hpp"

using namespace std;

class Pizza : public Produto {
   private:
    int _pedacos;
    bool _is_borda_recheada;
    string _sabor;

   public:
    Pizza(int quantidade, float valor_unitario, int pedacos, bool is_borda_rech, string sabor);

    string getSabor();

    void print();
};

#endif