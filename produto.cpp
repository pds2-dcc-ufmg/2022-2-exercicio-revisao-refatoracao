#include "produto.hpp"

Produto::Produto(int _q, float _valor_unitario)
    :q(_q), valor_unitario(_valor_unitario){}

int Produto::get_q() {
    return q;
}

float Produto::get_valorU() {
    return valor_unitario;
}

    Produto::~Produto() {}