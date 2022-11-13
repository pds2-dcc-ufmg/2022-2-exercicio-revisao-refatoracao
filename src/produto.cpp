#include "produto.hpp"

Produto::Produto(int quantidade, float valorUnitario) {
    this->_quantidade = quantidade;
    this->_valorUnitario = valorUnitario;
}

int Produto::getQuantidade() {
    return this->_quantidade;
}

float Produto::getValorUnitario() {
    return this->_valorUnitario;
}
