#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo_burger, bool artesanal)
    : Produto("Hamburguer", quantidade, valor_unitario), _tipo_burger(tipo_burger), _artesanal(artesanal){
        if(_artesanal){
            this->setValor(this->getValor()*_TAXA_ARTESANAL);
        }   
}

string Hamburguer::getTipoBurguer(){
    return _tipo_burger;
}

bool Hamburguer::getArtesanal(){
    return _artesanal;
}

void Hamburguer::print_info(){    
    cout << this->getTipo() << endl;
    Produto::print_info();
    cout << "\tTipo: " << this->getTipoBurguer() << endl;
    if (_artesanal) cout << "\tArtesanal" << endl;
}