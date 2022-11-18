#include <list>
#include <string>
#include <iostream>
#include "headers/pedido.hpp"

using namespace std;

void Pedido::adiciona_produto(Produto *p)
{
    _produtos.push_back(p);
}

float Pedido::calcula_total()
{
    float _valor_total = 0.0;
    list<Produto*>::iterator it;

    for (it = _produtos.begin(); it != _produtos.end(); it++)
    {
        _valor_total += (*it)->_valor_unitario*(*it)->_quantidade;
    }

    return _valor_total;
}

void Pedido::print_resumo()
{
    list<Produto*>::iterator it;
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;

    for (it = _produtos.begin(); it != _produtos.end(); it++){
        (*it)->print();
    }

    cout << "================================" << endl;
}