#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    
    private:

      int _pedacos;
      bool _borda_recheada;
      string _sabor;

    public:

        Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor);

        void print_info() override;
        
        int get_pedacos();
        bool get_borda_recheada();
        string get_sabor();

};

#endif