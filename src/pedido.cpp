#include "pedido.hpp"

using namespace std;

Pedido::Pedido(string endereco) : _endereco(endereco) {}

void Pedido::adiciona_produto(Produto *p)
{
    _produtos.push_back(p);
}

float Pedido::calcula_total()
{
    float val = 0.0;

    for (auto it = _produtos.begin(); it != _produtos.end(); it++)
    {
        val += (*it)->get_valorUnit() * (*it)->get_q();
    }

    return val;
}

void Pedido::print_resumo()
{
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;
    for (auto it = _produtos.begin(); it != _produtos.end(); it++)
    {
        (*it)->print();
    }
    cout << "================================" << endl;
}