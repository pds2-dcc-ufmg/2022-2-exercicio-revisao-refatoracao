#ifndef PIZZA_H
#define PIZZA_H

#include "Produto.hpp"

#include <string>
#include <iostream>

class Pizza: public Produto {
    private:
        std::string _sabor;
        int _quant_pedaco;
        bool _is_borda_rech;

    public:
        Pizza(int quantidade, float valor_unitario, std::string sabor,
            int quant_pedaco, bool is_borda_rech);

        std::string get_sabor();

        int get_quant_pedaco();

        bool is_borda_rech();

        void print_info() override;
};

#endif