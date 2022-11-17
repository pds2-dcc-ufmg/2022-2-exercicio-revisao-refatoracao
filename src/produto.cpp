#include "produto.hpp"

Produto::Produto(int quantidade, float valorUnitario):_quantidade(quantidade), _valorUnitario(valorUnitario){}

int Produto::get_quantidade(){
    return this->_quantidade;
}

float Produto::get_valorUnitario(){
    return this->_valorUnitario;
}

void Produto::print(){}

