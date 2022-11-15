#include "pedido.hpp"

Pedido::Pedido(string endereco){
    this->_endereco=endereco;
}

void Pedido::adiciona_produto(Produto *p){
    this->_produtos.push_back(p);
}

float Pedido::calcula_total(){
    float val=0.0;
    list<Produto*>::iterator it;

    for (it = _produtos.begin(); it != _produtos.end(); it++){
        val += (*it)->get_valor_unitario()*(*it)->get_quantidade();
    }

    return val;
}

void Pedido::print_resumo(){
   list<Produto*>::iterator it;

    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;

    for (it = _produtos.begin(); it != _produtos.end(); it++){
        (*it)->print();
    }

    cout << "================================" << endl;

    for (it = _produtos.begin(); it != _produtos.end(); it++){
        delete *it;
    }
}