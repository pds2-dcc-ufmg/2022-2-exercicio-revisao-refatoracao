#include "produto.hpp"



Produto::Produto(int q, float valor_unitario)
{
    _q = q;
    valorUnitario = valor_unitario;
}

int Produto::get_q()
{
    return _q;
}

float Produto::get_valorUnitario()
{
    return valorUnitario;
}