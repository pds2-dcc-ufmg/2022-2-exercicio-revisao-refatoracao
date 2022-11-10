#include "pizza.hpp"

Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech, string sabor): Produto(q, valor_unitario), pedacos(pedacos), borda_recheada(borda_rech), _sabor(sabor){}

void Pizza::print(){
    cout << "Pizza de " << get_sabor() << endl;
    cout << "\tQuantidade: " << get_quantidade() << endl;
    cout << "\tValor Unitario: " << get_valoruni() << endl;
    cout << "\tPedacos: " << this->pedacos << endl;
    if (this->borda_recheada) cout << "\tBorda Recheada" << endl;
}

string Pizza::get_sabor(){
    return this->_sabor;
}