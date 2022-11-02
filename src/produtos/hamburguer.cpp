#include "hamburguer.hpp"

using namespace std;

Hamburguer::Hamburguer(int q, float valor_unitario, string tipo, bool artesanal) : Produto(q, valor_unitario), _tipo(tipo), _artesanal(artesanal) 
{
    if (artesanal) { valor_unitario *= fator_artesanal; }
}

void Hamburguer::print()
{
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << _q << endl;
    cout << "\tValor Unitario: " << _valorUnitario<< endl;
    cout << "\tTipo: " << _tipo << endl;
    if (_artesanal)
        cout << "\tArtesanal" << endl;
}