#include "Hamburguer.hpp"


Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal) : Produto(quantidade, valor_unitario) {
    this->_tipo = tipo;
    this->_artesanal = artesanal;
}

Hamburguer::~Hamburguer() {
    //Usando smart pointers
}

void Hamburguer::print() {
    cout << "Hamburguer" << endl;

    /*Chama o print do produto, já que o hamburguer é produto.*/
    Produto::print();  

    cout << "\t" << "Tipo: " << this->_tipo << endl; 
    if (this->_artesanal == 1) cout << "\t" << "Artesanal" << endl;
}