#include <string>
#include <iostream>
#include "pizza.hpp"
#include "produto.hpp"

using namespace std;

pizza::pizza(int quantidade, float valorUnitario, int pedacos, string sabor, bool borda_rech): produto(quantidade, valorUnitario), _sabor(sabor), _pedacos(pedacos), _borda_recheada(borda_rech){}

void pizza::print(){
    cout << "Pizza de " << _sabor << endl;
    cout << "\tQuantidade: " << _quantidade << endl;
    cout << "\tValor Unitario: " << _valorUnitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;
        if (_borda_recheada){
            cout << "\tBorda Recheada" << endl;
            }
    }


