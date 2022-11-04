#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valorUnitario, string tipo, bool artesanal) :
Produto(quantidade, valorUnitario), _tipo(tipo), _artesanal(artesanal) {}

Hamburguer::~Hamburguer() {}

void Hamburguer::print() {

    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << this->getQuantidade() << endl;
    cout << "\tValor Unitario: " << this->getValorUnitario() << endl;
    cout << "\tTipo: " << this->_tipo << endl;
    if (this->_artesanal)
        cout << "\tArtesanal" << endl;
}