#include "Produto.hpp"

#include <iostream>
using namespace std;

Produto::Produto(int quantidade, double valor_unitario) {
    this->_valor_unitario = valor_unitario;
    this->_quantidade = quantidade;
}

Produto::~Produto() {
    /*Usando smart pointers*/
}

void Produto::print() {
    cout << "\t" << "Quantidade: " << this->get_quantidade() << endl;
    cout << "\t" << "Valor Unitario: " << this->get_valor_unitario() << endl;
}

double Produto::get_valor_unitario() {
    return this->_valor_unitario;
}

int Produto::get_quantidade() {
    return this->_quantidade;
}