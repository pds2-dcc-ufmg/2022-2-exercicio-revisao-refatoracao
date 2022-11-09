//
// Created by User on 09/11/2022.
//

#include "pedido.hpp"

float Pedido::calcula_total() {
float val=0.0;
list<Produto*>::iterator it;
for (it = _produtos.begin(); it != _produtos.end(); it++)
val += (*it)->get_valor_unitario()*(*it)->get_quantidade();
return val;
}
void Pedido::adiciona_produto(Produto *p) {
    _produtos.push_back(p);
}
void Pedido::print_resumo() {
list<Produto*>::iterator it;
cout << "================================" << endl;
cout << "Pedido - Endereco: " << _endereco << endl;
cout << "Valor total: " << calcula_total() << endl;
for (it = _produtos.begin(); it != _produtos.end(); it++)
(*it)->print();
cout << "================================" << endl;
}
Pedido::~Pedido() {
    for (std::list<Produto*>::iterator it=this->_produtos.begin(); it != this->_produtos.end(); ++it) {
        delete (*it);
    }
}