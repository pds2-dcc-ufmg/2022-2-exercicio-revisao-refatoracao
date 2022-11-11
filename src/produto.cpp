#include "produto.hpp"

    Produto::Produto(int quantidade, float valor_unitario): _quantidade(quantidade), _valor_unitario(valor_unitario) {}

    float  Produto::get_valor_unitario() { return this->_valor_unitario; }
    int  Produto::get_quantidade() { return this->_quantidade; }