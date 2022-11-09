//
// Created by User on 09/11/2022.
//
#include "pizza.hpp"
Pizza::Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech): Produto( quantidade, valor_unitario) {
    this->pedacos=pedacos;
    this->borda_rech=borda_rech;
}

void Pizza::print() {
    {
        cout << "Pizza de " << get_sabor() << endl;
        cout << "\tQuantidade: " << quantidade << endl;
        cout << "\tValor Unitario: " << valor_unitario << endl;
        cout << "\tPedacos: " << pedacos << endl;
        if (borda_rech)
            cout << "\tBorda Recheada" << endl;
    }
}