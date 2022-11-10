#include "hamburguer.hpp"

Hamburguer::Hamburguer(int q, float valor_unitario, string tipo, bool artesanal): Produto(q, valor_unitario), tipo(tipo), artesanal(artesanal){}

void Hamburguer::print(){
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << get_quantidade() << endl;
    cout << "\tValor Unitario: " << get_valoruni() << endl;
    cout << "\tTipo: " << this->tipo << endl;
    if (this->artesanal) cout << "\tArtesanal" << endl;
}