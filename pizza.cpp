#include "pizza.hpp"

pizza::pizza(){}

pizza::pizza(int _quantidade, float valor_unitario, int pedacos, bool borda_rech, string _sabor): 
    produto(_quantidade, valor_unitario), pedacos(pedacos), borda_recheada(borda_rech), sabor(_sabor){}

void pizza::print() {
    cout << "Pizza de " << sabor << endl;
    cout << "\tQuantidade: " << get_quantidade() <<endl;
    cout << "\tValor Unitario: " << get_valor_unitario() << endl;
    cout << "\tPedacos: " << pedacos << endl;
    if (borda_recheada) {
        cout << "\tBorda Recheada" << endl;
    }
} 