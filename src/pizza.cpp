#include <iostream>
#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_recheada, string sabor): Produto::Produto(quantidade, valor_unitario){
    this->pedacos = pedacos;
    this->borda_recheada = borda_recheada;
    this->sabor = sabor;
}

void Pizza::print(){
    cout << "Pizza de " << this->get_sabor() << endl;
    cout << "\tQuantidade: " << this->get_quantidade() << endl;
    cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
    cout << "\tPedacos: " << pedacos << endl;
    if (borda_recheada) cout << "\tBorda Recheada" << endl;
}

string Pizza::get_sabor(){
    return this->sabor;
}
