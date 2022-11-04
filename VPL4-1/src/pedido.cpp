#include "pedido.hpp"

Pedido::Pedido(string endereco): _endereco(endereco) {}

void Pedido::adicionarProduto(Produto* p) {

    this->_produtos.push_back(p);
}

Pedido::~Pedido() {

    for (auto it : this->_produtos)
        delete it;
}

float Pedido::calcularTotal() {

    float valorTotal = 0.0;
    for (auto &it : this->_produtos)
        valorTotal += (it->getValorUnitario() * it->getQuantidade());

    return valorTotal;
}

void Pedido::printResumo() {

    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << this->_endereco << endl;
    cout << "Valor total: " << this->calcularTotal() << endl;
    
    for (auto &it : this->_produtos)
        it->print();

    cout << "================================" << endl;
}