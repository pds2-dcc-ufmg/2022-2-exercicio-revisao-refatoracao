#include "hamburguer.hpp"

Hamburguer::Hamburguer(int qtd, float valor_unitario, string tipo, bool artesanal) : Produto(qtd, valor_unitario) {
    _tipo = tipo;
    _artesanal = artesanal;
}

void Hamburguer::print() {
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << _qtd << endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
    cout << "\tTipo: " << _tipo << endl;
    if (_artesanal)
    cout << "\tArtesanal" << endl;
}