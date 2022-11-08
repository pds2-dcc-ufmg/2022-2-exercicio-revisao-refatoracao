#include "Produto.hpp"


Produto::Produto(int quantidade, float valor_unitario) {
    this->_valor_unitario = valor_unitario;
    this->_quantidade = quantidade;
}

float Produto::get_valor_unitario() {
    return this->_valor_unitario;
}

int Produto::get_quantidade() {
    return this->_quantidade;
}