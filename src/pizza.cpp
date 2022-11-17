#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valorUnitario, int pedacos, bool isBordaRecheada, string sabor): Produto(quantidade, valorUnitario), _pedacos(pedacos), _isBordaRecheada(isBordaRecheada), _sabor(sabor){}

int Pizza::get_pedacos(){
    return this->_pedacos;
}

bool Pizza::get_isBordaRecheada(){
    return this->_isBordaRecheada;
}

string Pizza::get_sabor(){
    return this->_sabor;
}

void Pizza::print(){
        cout << "Pizza de " << this->get_sabor() << endl;
        cout << "\tQuantidade: " << this->get_quantidade() << endl;
        cout << "\tValor Unitario: " << this->get_valorUnitario() << endl;
        cout << "\tPedacos: " << this->get_pedacos() << endl;
        if(this->get_isBordaRecheada() == true){
            cout << "\tBorda Recheada" << endl;
        }
}