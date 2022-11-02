#include "pizza.hpp"

using namespace std;

Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech, string sabor) : Produto(q, valor_unitario), _pedacos(pedacos), _borda_recheada(borda_rech), _sabor(sabor) 
{
    if (borda_rech) { valor_unitario *= fator_borda; }
}

string Pizza::get_sabor() { return _sabor; }

void Pizza::print()
{
    cout << "Pizza de " << _sabor << endl;
    cout << "\tQuantidade: " << _q << endl;
    cout << "\tValor Unitario: " << _valorUnitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;
    if (_borda_recheada)
        cout << "\tBorda Recheada" << endl;
}
