#include "../include/Hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool is_artesanal)
    : Produto(quantidade, valor_unitario), _tipo(tipo), _is_artesanal(is_artesanal) {}

void Hamburguer::print() {
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << getQuantidade() << endl;
    cout << "\tValor Unitario: " << getValorUnitario() << endl;
    cout << "\tTipo: " << _tipo << endl;
    if (_is_artesanal) cout << "\tArtesanal" << endl;
}

string Hamburguer::getTipo() {
    return _tipo;
}

bool Hamburguer::isArtesanal() {
    return _is_artesanal;
}
