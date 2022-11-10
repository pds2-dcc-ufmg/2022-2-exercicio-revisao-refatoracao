#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#define TARIFA_ARTESANAL 2.0 /*Tarifa se o hamburguer for artesanal*/

#include "Produto.hpp"

#include <string>
#include <iostream>

using namespace std;


class Hamburguer: public Produto {
    public:
        Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal);

        virtual void print() override;

        ~Hamburguer();

        void adicionar_tarifas() override;
        
    private:
        string _tipo;
        bool _artesanal;

};

#endif