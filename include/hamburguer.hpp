#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#define TAXA_ARTESANAL 2.0f

#include "produto.hpp"

#include <string>
#include <iostream>

using namespace std;

class Hamburguer: public Produto{
    public:
        Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal);
        virtual ~Hamburguer();

        string get_tipo();
        void is_artesanal();
        virtual void print() override;

    private:
        string _tipo;
        bool _artesanal;
};

#endif