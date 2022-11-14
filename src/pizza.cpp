#include "pizza.hpp"

Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech, string sabor): Produto(q, valor_unitario), pedacos(pedacos), borda_recheada(borda_rech), sabor(sabor){}

void Pizza::print(){
    cout << "Pizza de " << sabor << endl;
    cout << "\tQuantidade: " << q << endl;
    cout << "\tValor Unitario: " << valorUnitario << endl;
    cout << "\tPedacos: " << pedacos << endl;
    if (borda_recheada){
        cout << "\tBorda Recheada" << endl;
    }
}