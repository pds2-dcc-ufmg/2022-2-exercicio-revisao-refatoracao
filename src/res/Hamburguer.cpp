#include "Hamburguer.hpp"


Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal) : Produto(quantidade, valor_unitario) {
    this->_tipo = tipo;
    this->_artesanal = artesanal;
}

void Hamburguer::print() {
    cout << "Hamburguer" << endl;

    cout << "\t" << "Quantidade: " << this->get_quantidade() << endl;
    cout << "\t" << "Valor Unitario: " << this->get_valor_unitario() << endl;

    cout << "\t" << "Tipo: " << this->_tipo << endl; 
    if (this->_artesanal == 1) cout << "\t" << "Artesanal" << endl;
}