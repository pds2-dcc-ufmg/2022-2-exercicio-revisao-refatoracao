#include <iostream>
#include "produto.hpp"
#include "pedido.hpp"

Pedido::Pedido(string _endereco){
    this->_endereco = _endereco;
}

void Pedido::adiciona_produto(Produto *p){
    _produtos.push_back(p);
}

float Pedido::calcula_total(){
    float val = 0.0;
    list<Produto*>::iterator it;

    for (auto it = _produtos.begin(); it != _produtos.end(); it++){
        val += (*it)->get_valor_unitario()*(*it)->get_quantidade();

    }
    
    return val;
}

void Pedido::print_resumo(){
    list<Produto*>::iterator it;

    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;

    for (auto it = _produtos.begin(); it != _produtos.end(); it++){
        (*it)->print();
    
    }
    
    cout << "================================" << endl;
}        