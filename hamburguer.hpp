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

        Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): Produto(quantidade, valor_unitario), _tipo(tipo), _artesanal(artesanal) {}
        
        virtual void print_info() override{

            cout << "Hamburguer" << endl;
            cout << "\tQuantidade: " << get_quantidade() << endl;
            cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
            cout << "\tTipo: " << _tipo << endl;
            if (_artesanal) cout << "\tArtesanal" << endl;

        }

};

#endif
