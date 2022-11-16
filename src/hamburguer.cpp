#include"hamburguer.hpp"
#include<iostream>

Hamburguer::Hamburguer(int q, float valorUnitario, string tipo, bool artesanal):Produto(q, valorUnitario){
    this->_tipo=tipo; 
    this->_artesanal=artesanal; 
}

string Hamburguer::get_tipo(){
    return this->_tipo; 
}

bool Hamburguer::get_artesanal(){
    return this->_artesanal; 
}

void Hamburguer::print(){
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << get_q() << endl;
    cout << "\tValor Unitario: " << get_valorUnitario() << endl;
    cout << "\tTipo: " << get_tipo() << endl;
    if (get_artesanal()==1){
        cout << "\tArtesanal" << endl;
    } 
}