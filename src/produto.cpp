#include <iostream>
#include "produto.hpp"

Produto::Produto(int quantidade, float valor_unitario){
    this->quantidade = quantidade;
    this->valor_unitario = valor_unitario;
}

int Produto::get_quantidade(){
    return this->quantidade;
}

float Produto::get_valor_unitario(){
    return this->valor_unitario;
}
