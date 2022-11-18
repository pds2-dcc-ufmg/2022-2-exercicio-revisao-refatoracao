#include "pedido.hpp"

Pedido::Pedido(string endereco): _endereco(endereco){}

list<Produto*> Pedido::get_produtos(){
    return this->_produtos;
}

string Pedido::get_endereco(){
    return this->_endereco;
}

void Pedido::adiciona_produto(Produto *produto){
    this->_produtos.push_back(produto);
}

float Pedido::calcula_total(){
    float valorTotal = 0.0;
    list<Produto*>::iterator it;
    for (it =this-> _produtos.begin(); it != this->_produtos.end(); it++){
        valorTotal += (*it)->get_valorUnitario()*(*it)->get_quantidade();
    }
    return valorTotal;
}

void Pedido::print_resumo(){
    list<Produto*>::iterator it;
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << this->_endereco << endl;
    cout << "Valor total: " << this->calcula_total() << endl;
    for (it = this->_produtos.begin(); it != this->_produtos.end(); it++){
        (*it)->print();
    }
    cout << "================================" << endl;
}