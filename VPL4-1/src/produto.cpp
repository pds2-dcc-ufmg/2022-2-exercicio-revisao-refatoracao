#include "produto.hpp"

Produto::Produto(int quantidade, float valorUnitario) :
_quantidade(quantidade), _valorUnitario(valorUnitario) {}

Produto::~Produto() {}

int Produto::getQuantidade() {

    return this->_quantidade;
}

float Produto::getValorUnitario() {

    return this->_valorUnitario;
}