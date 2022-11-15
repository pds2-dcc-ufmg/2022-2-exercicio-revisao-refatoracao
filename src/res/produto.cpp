#include "produto.hpp"

Produto::Produto(int q, float valor_unitario){
    this->_q = q;
    this->_valorUnitario = valor_unitario;
}

Produto::~Produto(){}

int Produto::get_q(){
    return(this->_q);
}

float Produto::get_valorUnitario(){
    return(this->_valorUnitario);
}

