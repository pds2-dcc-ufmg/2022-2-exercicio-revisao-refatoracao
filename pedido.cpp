#include "pedido.hpp"

Pedido::Pedido(string _endereco)
    : endereco(_endereco){}

void Pedido::adiciona_produto(Produto *p) {
    produtos.push_back(p);
}

float Pedido::calcula_total(){
    float val = 0.0;
    list<Produto*>::iterator it;
    for (it = produtos.begin(); it != produtos.end(); it++){
        val = (*it)->get_valorU() * (*it)->get_q();
    }
    return val;
}

void Pedido::print_resumo(){
    list<Produto*>::iterator it;
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;
    for (it = produtos.begin(); it != produtos.end(); it++){
        (*it)->print();
    }
    cout << "================================" << endl;
}

Pedido::~Pedido() {}