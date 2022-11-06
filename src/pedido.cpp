#include "pedido.hpp"

Pedido::Pedido(string endereco) : _endereco(endereco) {}

void Pedido::adiciona_produto(Produto *p) {
    _produtos.push_back(p);
}

float Pedido::calcula_total() {
    float valor_total = 0;
    float preco_produto;
    int quantidade_produto;

    list<Produto*>::iterator it;

    for (it = _produtos.begin(); it != _produtos.end(); ++it) {
        preco_produto = (*it)->get_valor_unitario();
        quantidade_produto = (*it)->get_quantidade();

        valor_total += quantidade_produto * preco_produto;
    }

    return valor_total;
}

void Pedido::print_resumo() {

    float valor_total = calcula_total();

    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << valor_total << endl;

    list<Produto*>::iterator it;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        (*it)->print();
    }
    cout << "================================" << endl;
}