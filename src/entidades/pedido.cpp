#include "pedido.hpp"

Pedido::Pedido(string endereco) {
    _endereco = endereco;
}

void Pedido::adiciona_produto(Produto *produto) {
    _produtos.push_back(produto); 
}

float Pedido::calcula_total() {
    float val = 0.0;
    list<Produto *>::iterator produto;
    for (produto = _produtos.begin(); produto != _produtos.end(); produto++) {
        val += (*produto)->get_valor_unitario() * (*produto)->get_qtd();
    }
    return val;
}

void Pedido::print_resumo() {
    list<Produto *>::iterator produto;
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;
    for (produto = _produtos.begin(); produto != _produtos.end(); produto++) {
    (*produto)->print();
    }
    cout << "================================" << endl;
}