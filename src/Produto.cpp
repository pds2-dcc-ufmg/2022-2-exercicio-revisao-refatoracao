#include "../include/Produto.hpp"

Produto::Produto(int quantidade, float valor_unitario) : _quantidade(quantidade), _valor_unitario(valor_unitario) {}

int Produto::getQuantidade() {
    return _quantidade;
}

float Produto::getValorUnitario() {
    return _valor_unitario;
}