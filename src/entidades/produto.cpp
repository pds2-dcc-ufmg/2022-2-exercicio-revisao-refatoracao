#include "produto.hpp"

Produto::Produto(int q, float valor_unitario) {
    _q = q;
    _valor_unitario = valor_unitario;
}

int Produto::get_qtd() {
    return _q;
}

float Produto::get_valor_unitario() {
    return _valor_unitario;
}