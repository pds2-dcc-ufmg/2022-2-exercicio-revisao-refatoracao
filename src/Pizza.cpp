#include "../include/Pizza.hpp"

Pizza::Pizza(int quantidade, float valor_unitario, int pedacos, bool is_borda_rech, string sabor)
    : Produto(quantidade, valor_unitario), _pedacos(pedacos), _is_borda_recheada(is_borda_rech), _sabor(sabor) {}

string Pizza::getSabor() {
    return _sabor;
}

void Pizza::print() {
    cout << "Pizza de " << getSabor() << endl;
    cout << "\tQuantidade: " << getQuantidade() << endl;
    cout << "\tValor Unitario: " << getValorUnitario() << endl;
    cout << "\tPedacos: " << _pedacos << endl;

    if (_is_borda_recheada) cout << "\tBorda Recheada" << endl;
}
