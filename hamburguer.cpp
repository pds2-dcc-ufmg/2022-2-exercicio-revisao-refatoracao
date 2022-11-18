#include <iostream>
#include "headers/hamburguer.hpp"

using namespace std;

Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): Produto(quantidade, valor_unitario)
{
    _quantidade = quantidade;
    _valor_unitario = valor_unitario;
    _tipo = tipo;
    _artesanal = artesanal;
}

void Hamburguer::print()
{
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << _quantidade<< endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
    cout << "\tTipo: " << _tipo << endl;
    if (_artesanal) 
    {
        cout << "\tArtesanal" << endl;
    }
};