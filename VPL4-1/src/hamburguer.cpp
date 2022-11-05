#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valorUnitario, string tipo, bool artesanal) :
Produto(quantidade, valorUnitario), _tipo(tipo), _artesanal(artesanal) {}

Hamburguer::~Hamburguer() {}

void Hamburguer::print() {

    cout << "Hamburguer" << endl;
    cout << "\t" << "Quantidade: " << this->getQuantidade() << endl;
    cout << "\t" << "Valor Unitario: " << this->getValorUnitario() << endl;
    cout << "\t" << "Tipo: " << this->_tipo << endl;
    if (this->_artesanal)
        cout << "\t" << "Artesanal" << endl;
}