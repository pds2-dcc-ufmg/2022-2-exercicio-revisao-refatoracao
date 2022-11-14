#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Hamburguer: public Produto{
    private:
        bool artesanal;

        string tipo;

    public:
        Hamburguer(int q, float valor_unitario, string tipo, bool artesanal);

        virtual void print() override;

};

#endif