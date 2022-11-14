#include "hamburguer.hpp"

Hamburguer::Hamburguer(int q, float valor_unitario, string tipo, bool artesanal) : Produto(q, valor_unitario), tipo(tipo), artesanal(artesanal){}

void Hamburguer::print(){
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << q << endl;
    cout << "\tValor Unitario: " << valorUnitario << endl;
    cout << "\tTipo: " << tipo << endl;
    if (artesanal) cout << "\tArtesanal" << endl;
}