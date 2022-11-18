#include <iostream>
#include "headers/produto.hpp"

using namespace std;

Produto::Produto(int quantidade, float valor_unitario)
{
    _quantidade = quantidade;
    _valor_unitario = valor_unitario;
}

void Produto::print()
{
    cout << "\tQuantidade: " << _quantidade << endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
}