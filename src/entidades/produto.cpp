#include "produto.hpp"

Produto::Produto(int quant, float preco): _quantidade(quant), _preco(preco) {}

int Produto::get_quant() {
    return _quantidade;
}

float Produto::get_preco() {
    return _preco;
}