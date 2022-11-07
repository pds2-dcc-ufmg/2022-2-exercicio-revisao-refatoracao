#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): Produto(quantidade, valor_unitario), _tipo(tipo) {

    //verifica se o hamburguer é artesanal e aplica 100% de aumento, em caso verdadeiro
    if(_artesanal) {
        this->_valor_unitario = valor_unitario * TAXA_ARTESANAL;
    } else {
        this->_valor_unitario = valor_unitario;
    }
}

Hamburguer::~Hamburguer() {}

string Hamburguer::get_tipo() { return this->_tipo; }

void Hamburguer::is_artesanal() {

    //verifica se o hamburguer é artesanal e retorna o output o indicando, em caso verdadeiro
    if(_artesanal) {
        cout << "\tArtesanal" << endl;
    }
}

void Hamburguer::print() {
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << _quantidade << endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
    cout << "\tTipo: " << _tipo << endl;
    is_artesanal();          
}