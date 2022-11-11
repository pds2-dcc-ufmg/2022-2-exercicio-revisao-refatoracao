#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valorUnitario, string tipo, bool isArtesanal): Produto(quantidade, valorUnitario), _tipo(tipo), _isArtesanal(isArtesanal){}

void Hamburguer::print(){
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << this->get_quantidade() << endl;
    cout << "\tValor Unitario: " << this->get_valorUnitario() << endl;
    cout << "\tTipo: " << this->_tipo << endl;
    if(this->_isArtesanal == true){
        cout << "\tArtesanal" << endl;
    }
}
