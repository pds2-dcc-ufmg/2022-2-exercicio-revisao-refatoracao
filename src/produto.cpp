#include "produto.hpp"

Produto::Produto(int quantidade, float valor_unitario):_quantidade(quantidade), _valorUnitario(valor_unitario){}

int Produto::get_quantidade(){
    return _quantidade;
}

float Produto::get_valorUnitario(){
    return _valorUnitario;
}

void Produto::print(){}