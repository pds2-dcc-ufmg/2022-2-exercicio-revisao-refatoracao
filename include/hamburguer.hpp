#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"

#include <string>
#include <iostream>

using namespace std;

class Hamburguer: public Produto{
    private:
        bool _isArtesanal;
        string _tipo;

    public:
        Hamburguer(int quantidade, float valorUnitario, string tipo, bool isArtesanal);

        virtual void print();
};

#endif