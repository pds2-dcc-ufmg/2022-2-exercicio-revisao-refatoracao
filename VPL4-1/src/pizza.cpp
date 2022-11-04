#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, string sabor) :
Produto(quantidade, valorUnitario), _pedacos(pedacos), _bordaRecheada(bordaRecheada), _sabor(sabor) {}

Pizza::~Pizza() {}

void Pizza::print() {

    cout << "Pizza de " << this->_sabor << endl;
    cout << "\tQuantidade: " << this->getQuantidade() << endl;
    cout << "\tValor Unitario: " << this->getValorUnitario() << endl;
    cout << "\tPedacos: " << this->_pedacos << endl;
    if (this->_bordaRecheada)
        cout << "\tBorda Recheada" << endl;
}