#include "Hamburguer.hpp"


Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal) : Produto(quantidade, valor_unitario) {
    this->_tipo = tipo;
    this->_artesanal = artesanal;

}

Hamburguer::~Hamburguer() {
    //Usando smart pointers
}

/*Realiza a adição das tarifas necessárias usando o set_valor_unitario de produto*/
void Hamburguer::adicionar_tarifas() {
    if (this->_artesanal == 1) {
        this->set_valor_unitario(TARIFA_ARTESANAL * this->get_valor_unitario());
        return;
    }

    else return;
}

void Hamburguer::print() {
    cout << "Hamburguer" << endl;

    Produto::print();  

    cout << "\t" << "Tipo: " << this->_tipo << endl; 
    if (this->_artesanal == 1) cout << "\t" << "Artesanal" << endl;
}