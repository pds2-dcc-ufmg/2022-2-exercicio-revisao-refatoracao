#include "hamburguer.hpp"

Hamburguer::Hamburguer(int q, float valor_unitario, string tipo, bool artesanal) : Produto(q, valor_unitario){
    this->_tipo = tipo;
    this->_artesanal = artesanal;
}

void Hamburguer::print(){
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << this->get_q() << endl;
    cout << "\tValor Unitario: " << this->get_valorUnitario() << endl;
    cout << "\tTipo: " << this->get_tipo() << endl;
    if (this->get_artesanal()) cout << "\tArtesanal" << endl;
}

Hamburguer::~Hamburguer(){}

string Hamburguer::get_tipo(){
    return(this->_tipo);
}

bool Hamburguer::get_artesanal(){
    return(this->_artesanal);
}
