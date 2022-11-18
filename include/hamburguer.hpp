#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"

#include <string>
#include <iostream>

using namespace std;

class Hamburguer: public Produto{
    private:
        string _tipo;
        bool _is_artesanal;

    public:
        Hamburguer(int q, float valor_unitario, string tipo, bool artesanal);
        
        virtual void print();

        string get_tipo();

        bool get_is_artesanal();

};

#endif