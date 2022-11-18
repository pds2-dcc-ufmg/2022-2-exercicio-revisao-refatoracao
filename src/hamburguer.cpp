#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): Produto(quantidade, valor_unitario), _tipo(tipo), _is_artesanal(artesanal){}

bool Hamburguer::get_is_artesanal(){
    return _is_artesanal;
}

string Hamburguer::get_tipo(){
    return _tipo;
}

void Hamburguer::print() {
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << this->get_quantidade() << endl;
    cout << "\tValor Unitario: " << this->get_valorUnitario() << endl;
    cout << "\tTipo: " << get_tipo() << endl;
    if (get_is_artesanal()) 
        cout << "\tArtesanal" << endl;
}