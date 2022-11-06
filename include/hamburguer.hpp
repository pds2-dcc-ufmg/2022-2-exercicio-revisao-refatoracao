#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Hamburguer : public Produto {
    public:
        Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal);

        virtual void print() override;
    
    private:
        string _tipo;
        bool _artesanal;
        float taxa_artesanal = 2.0;

};

#endif