#include "pizza.hpp"

Pizza::Pizza(int _q, float _valor_unitario, int _pedacos, bool _borda_rech, string _sabor)
    : Produto(_q, _valor_unitario), pedacos(_pedacos), borda_recheada(_borda_rech), sabor(_sabor){
        if (borda_recheada) {
            valor_unitario = valor_unitario * 1.4;
        }
    }

string Pizza::get_sabor() {
    return sabor;
}

void Pizza::print() {
    cout << "Pizza de " << sabor << endl;
    cout << "\tQuantidade: " << get_q() << endl;
    cout << "\tValor Unitario: " << get_valorU() << endl;
    cout << "\tPedacos: " << pedacos << endl;
    if (borda_recheada) cout << "\tBorda Recheada" << endl;
}

    Pizza::~Pizza() {}