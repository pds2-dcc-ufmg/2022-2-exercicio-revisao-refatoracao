#include "pedido.hpp"

Pedido::Pedido(std::string endereco): _endereco(endereco) {}

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

    std::cout << "================================" << std::endl;
    std::cout << "Pedido - Endereco: " << this->_endereco << std::endl;
    std::cout << "Valor total: " << this->calcularTotal() << std::endl;
    
    for (auto &it : this->_produtos)
        it->print();

    std::cout << "================================" << std::endl;
}