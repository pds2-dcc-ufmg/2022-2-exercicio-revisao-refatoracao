#include "produto.hpp"

Produto::Produto(int quantidade, float valorUnitario) {
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
}

int Produto::get_quantidade(){
    return this->quantidade;
}

float Produto::get_valorUnitario(){
    return this->valorUnitario;
}
