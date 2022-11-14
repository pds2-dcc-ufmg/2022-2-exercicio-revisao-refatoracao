#include "produto.hpp"

Produto::Produto(int q, float valor_unitario): q(q), valorUnitario(valor_unitario){}

float Produto::get_valor(){
    return valorUnitario;
}

int Produto::get_q(){
    return q;
}