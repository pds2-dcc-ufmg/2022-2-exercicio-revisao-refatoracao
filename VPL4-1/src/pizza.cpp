#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, string sabor) :
Produto(quantidade, valorUnitario), _pedacos(pedacos), _bordaRecheada(bordaRecheada), _sabor(sabor) {}

Pizza::~Pizza() {}

void Pizza::print() {

    cout << "Pizza de " << this->_sabor << endl;
    cout << "\t" << "Quantidade: " << this->getQuantidade() << endl;
    cout << "\t" << "Valor Unitario: " << this->getValorUnitario() << endl;
    cout << "\t" << "Pedacos: " << this->_pedacos << endl;
    if (this->_bordaRecheada)
        cout << "\tBorda Recheada" << endl;
}