#include "produto.hpp"

Produto::Produto(int quantidade, float valor_unitario){
    _quantidade = quantidade;
    _valor_unitario = valor_unitario;
}

int Produto::get_quantidade(){
    return _quantidade;
}

float Produto::get_valor_unitario(){
    return _valor_unitario;
}

