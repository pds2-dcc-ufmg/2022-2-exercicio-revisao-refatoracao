#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"

#include <string>
#include <iostream>

class Hamburguer : public Produto {
    
    private:
        std::string _tipo;
        bool _artesanal;
    
    public:
        Hamburguer(int quantidade, float valorUnitario, std::string tipo, bool artesanal);
        ~Hamburguer();

        void print() override;
};

#endif