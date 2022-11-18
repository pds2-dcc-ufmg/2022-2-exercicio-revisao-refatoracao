#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class hamburguer : public produto {
    public:
        hamburguer(int quant, float valor_unitario, string tipo, bool artesanal): produto(quant, valor_unitario), tipo(tipo), artesanal(artesanal) {}
        
        string tipo;
        
        virtual void print() override {
            cout << "Hamburguer" << endl;
            cout << "\tQuantidade: " << quant << endl;
            cout << "\tValor Unitario: " << valorUnitario << endl;
            cout << "\tTipo: " << tipo << endl;
            if (artesanal) cout << "\tArtesanal" << endl;
        }
        
        bool artesanal;

};

#endif