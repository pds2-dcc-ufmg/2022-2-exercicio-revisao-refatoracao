#include "pizza.hpp"

Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_recheada) : Produto(q, valor_unitario) {
    _pedacos = pedacos;
    _borda_recheada;
}

void Pizza::print() {
    cout << "Pizza de " << get_sabor() << endl;
    cout << "\tQuantidade: " << _q << endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;
    if (_borda_recheada)
    cout << "\tBorda Recheada" << endl;
}