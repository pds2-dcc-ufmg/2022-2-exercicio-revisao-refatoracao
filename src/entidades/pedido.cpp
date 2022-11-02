#include "pedido.hpp"

list<Produto*>::iterator it;

Pedido::Pedido(string endereco): _endereco(endereco){
    this->_endereco = endereco;
}

void Pedido::adiciona_produto(Produto* p){
    this->_produtos.push_back(p);
}

float Pedido::calcula_total(){
    float valor_total = 0.0;
    
    for (it = this->_produtos.begin(); it != this->_produtos.end(); it++)
        valor_total += ((*it)->get_valor_unitario()) * ((*it)->get_quantidade_produto());
    
    return valor_total;
}

void Pedido::print_resumo(){
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << this->_endereco << endl;
    cout << "Valor total: " << this->calcula_total() << endl;
    
    for (it = this->_produtos.begin(); it != this->_produtos.end(); it++)
        (*it)->print();
    
    cout << "================================" << endl;
}