#include <iostream>
#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): Produto::Produto(quantidade, valor_unitario){
    this->tipo = tipo;
    this->artesanal = artesanal;
}

void Hamburguer::print(){
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << this->get_quantidade() << endl;
    cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
    cout << "\tTipo: " << tipo << endl;
    if (artesanal) cout << "\tArtesanal" << endl;
}
