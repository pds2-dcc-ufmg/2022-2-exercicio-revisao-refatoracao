#include "produto.hpp"

Produto::Produto(int qtd, float valor_unitario) {
    _qtd = qtd;
    _valor_unitario = valor_unitario;
}

int Produto::get_qtd() {
    return _qtd;
}

float Produto::get_valor_unitario() {
    return _valor_unitario;
}