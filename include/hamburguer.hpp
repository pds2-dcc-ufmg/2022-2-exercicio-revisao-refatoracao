#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Hamburguer : public Produto
{
    const float fator_artesanal = 2.0;

protected:
    string _tipo;
    bool _artesanal;

public:
    Hamburguer(int q, float valor_unitario, string tipo, bool artesanal);
    virtual void print() override;
};

#endif