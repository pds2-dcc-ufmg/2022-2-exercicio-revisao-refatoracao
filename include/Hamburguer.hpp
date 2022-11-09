#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "Produto.hpp"

#include <string>
#include <iostream>

class Hamburguer: public Produto {
    private:
        std::string _tipo;
        bool _is_artesanal;

    public:
        Hamburguer(int quantidade, float valor_unitario, std::string tipo,
            bool is_artesanal);

        std::string get_tipo();

        bool is_artesanal();

        void print_info() override;
};

#endif