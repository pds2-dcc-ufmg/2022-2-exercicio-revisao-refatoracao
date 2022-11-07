#include "pedido.hpp"

Pedido::Pedido(string endereco): _endereco(endereco) {}

void Pedido::adiciona_produto(shared_ptr<Produto> produto){
    _produtos.emplace_back(produto);
}

float Pedido::calcula_total() {
    float total = 0.0f;

    //calcula o valor total do pedido fazendo o cálculo quantidade x valor unitário de cada produto
    for(const auto &produto : _produtos) {
        total += produto->get_quantidade() * produto->get_valor_unitario();
    }

    return total;
}

void Pedido::print_resumo() {
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;


    //imprime informações de cada produto no pedido
    for (const auto &produto : _produtos){
        produto->print();
    }  

    cout << "================================" << endl;
}