#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade_hamburguer, float valor_unitario, string tipo, bool artesanal):
    Produto::Produto(quantidade_hamburguer, valor_unitario){
    this->_tipo=tipo;
    this->_artesanal=artesanal;
}

void Hamburguer::print(){
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << get_quantidade() << endl;
    cout << "\tValor Unitario: " << get_valor_unitario() << endl;
    cout << "\tTipo: " << get_tipo << endl;
    
    if (_artesanal){
        cout << "\tArtesanal" << endl;
        }

}