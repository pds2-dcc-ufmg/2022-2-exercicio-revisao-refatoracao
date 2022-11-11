#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Hamburguer: public Produto{

    private:
        string _tipo;
        bool _artesanal;



    public:

        Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal);

        void print_info() override;

};

#endif