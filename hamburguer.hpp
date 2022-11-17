#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"

using namespace std;

class Hamburguer: public Produto{
    string tipo;
    bool artesanal;

    public:
        Hamburguer(int q, float valor_unitario, string tipo, bool artesanal);
        void print() override;
        virtual ~Hamburguer();

};

#endif