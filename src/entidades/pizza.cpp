#include "pizza.hpp"

Pizza::Pizza(int qtd, float valor_unitario, int pedacos, bool borda_recheada) : Produto(qtd, valor_unitario) {
    _pedacos = pedacos;
    _borda_recheada;
}

void Pizza::print() {
    cout << "Pizza de " << get_sabor() << endl;
    cout << "\tQuantidade: " << _qtd << endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;
    if (_borda_recheada)
        cout << "\tBorda Recheada" << endl;
}