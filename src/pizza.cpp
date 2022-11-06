#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valor_unitario, string sabor, int pedacos, bool borda_recheada) : Produto(quantidade, valor_unitario), _sabor(sabor), _pedacos(pedacos), _borda_recheada(borda_recheada) {
    
    if (borda_recheada) {
        valor_unitario = valor_unitario * _taxa_borda;
        set_valor_unitario(valor_unitario);
    }    
}

void Pizza::print() {

    int quantidade = get_quantidade();
    float valor_unitario = get_valor_unitario();

    cout << "Pizza de " << _sabor << endl;
    cout << "\tQuantidade: " << quantidade << endl;
    cout << "\tValor Unitario: " << valor_unitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;

    if (_borda_recheada) 
        cout << "\tBorda Recheada" << endl;
}

string Pizza::get_sabor() {
    return _sabor;
}


