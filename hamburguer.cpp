//
// Created by User on 09/11/2022.
//
#include "hamburguer.hpp"
Hamburguer::Hamburguer(int quantidade, float valor_unitario, std::string tipo, bool artesanal):Produto(quantidade , valor_unitario) {
    this->tipo= tipo;
    this->artesanal=artesanal;
}

void Hamburguer::print() {
    {
        cout << "Hamburguer" << endl;
        cout << "\tQuantidade: " << quantidade << endl;
        cout << "\tValor Unitario: " << valor_unitario << endl;
        cout << "\tTipo: " << tipo << endl;
        if (artesanal)
            cout << "\tArtesanal" << endl;
    }
}
