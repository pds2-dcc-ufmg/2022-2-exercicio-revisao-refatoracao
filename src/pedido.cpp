#include "pedido.hpp"

using namespace std;

Pedido::Pedido(string endereco) : _endereco(endereco) {}

void Pedido::adicionar_produto(Produto *produto)
{
    _produtos.push_back(produto);
}

float Pedido::valor_total()
{
    float val = 0.0;

    for (auto it = _produtos.begin(); it != _produtos.end(); it++)
    {
        val += (*it)->get_valorUnit() * (*it)->get_quantidade();
    }

    return val;
}

void Pedido::print_resumo()
{
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << valor_total() << endl;
    for (auto it = _produtos.begin(); it != _produtos.end(); it++)
    {
        (*it)->print();
    }
    cout << "================================" << endl;
}