#include <iostream>
#include "headers/pizza.hpp"
#include <string>

using namespace std;

Pizza::Pizza(string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_recheada): Produto(quantidade, valor_unitario), _pedacos(pedacos), _borda_recheada(borda_recheada)
{
    _sabor = sabor;
    _quantidade = quantidade;
    _valor_unitario = valor_unitario;
    _pedacos = pedacos;
    _borda_recheada = borda_recheada;
}

void Pizza::print()
{
    cout << "Pizza de " << _sabor << endl;
    cout << "\tQuantidade: " << _quantidade << endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;
        if (_borda_recheada)
        {
            cout << "\tBorda Recheada" << endl;
        }
}