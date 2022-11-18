#include "pedido.hpp"

pedido::pedido(){}

pedido::pedido(string endereco)
    : _endereco(endereco){}

void pedido::adiciona_produto(produto *_produto){
    _produtos.push_back(_produto);
}

float pedido::calcula_total(){
    float valor_total=0.0;
    list<produto*>::iterator it;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        valor_total += (*it)->get_valor_unitario()*(*it)->get_quantidade();
    }
    return valor_total;
}

void pedido::print_resumo(){
    list<produto*>::iterator it;
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        (*it)->print();
    }
    cout << "================================" << endl;
}