#include "../include/Pedido.hpp"

Pedido::Pedido(string endereco) : _endereco(endereco) {}

void Pedido::adicionaProduto(Produto *p) {
    _produtos.push_back(p);
}

float Pedido::calcula_total() {
    float valor = 0.0;

    list<Produto *>::iterator it;
    for (Produto *produto : _produtos) {
        valor += produto->getValorUnitario() * produto->getQuantidade();
    }

    return valor;
}

void Pedido::print_resumo() {
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;

    for (Produto *produto : _produtos) {
        produto->print();
    }

    cout << "================================" << endl;
}

string Pedido::getEndereco() {
    return _endereco;
}