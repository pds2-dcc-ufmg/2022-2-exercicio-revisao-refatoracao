#include "hamburguer.hpp"

Hamburguer::Hamburguer(int _q, float _valor_unitario, string _tipo, bool _artesanal) 
    : Produto(_q, _valor_unitario), tipo(_tipo), artesanal(_artesanal){
        if (artesanal) {
            valor_unitario = valor_unitario * 2;
        }
    }

void Hamburguer::print() {
    cout << "hamburguer" << endl;
    cout << "\tQuantidade: " << get_q() << endl;
    cout << "\tValor Unitario: " << get_valorU() << endl;
    cout << "\tTipo: " << tipo << endl;
    if (artesanal) cout << "\tArtesanal" << endl;
}

Hamburguer::~Hamburguer() {}