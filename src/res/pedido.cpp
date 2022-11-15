#include "pedido.hpp"

Pedido::Pedido(string endereco){
    this->_endereco = endereco;
}

void Pedido::adiciona_produto(shared_ptr<Produto> &p){
    _produtos.push_back(p);
}

float Pedido::calcula_total(){
    float val=0.0;
    list<shared_ptr<Produto>>::iterator it;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        val += (*it)->get_valorUnitario()*(*it)->get_q();
    }
    return val;
}

void Pedido::print_resumo(){
    list<shared_ptr<Produto>>::iterator it;
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        (*it)->print();
    }
    cout << "================================" << endl;
}



