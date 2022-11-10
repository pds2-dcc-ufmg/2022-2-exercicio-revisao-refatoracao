#include "produto.hpp"

Produto::Produto(int q, float valor_unitario):quantidade(q), valorUnitario(valor_unitario){}

int Produto::get_quantidade(){
    return this->quantidade;
}

float Produto::get_valoruni(){
    return this->valorUnitario;
}
