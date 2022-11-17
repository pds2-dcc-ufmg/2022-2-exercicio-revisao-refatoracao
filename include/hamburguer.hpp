#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class hamburguer: public produto{
    private:
        string _tipo;
        bool _artesanal;
    public:
        hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal);
        virtual void print() override;

};

#endif