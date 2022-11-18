#include "pedido.hpp"

Pedido::Pedido(string endereco): _endereco(endereco){

}

void Pedido::adiciona_produto(int q, float v, string t, bool a){
    _produtos.push_back(move(shared_ptr<Hamburguer> (new Hamburguer(q, v, t, a))));
}

void Pedido::adiciona_produto(string s, int q, float v, int p, bool b_r){
    _produtos.push_back(move(shared_ptr<Pizza> (new Pizza(s, q, v, p, b_r))));
}

float Pedido::calcula_total(){
    for (int i = 0; i < _produtos.size(); i++){
        _soma_total = _soma_total + (_produtos[i]->getValor() * _produtos[i]->getQuantidade());
    }
    return _soma_total;
}

void Pedido::print_resumo(){
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;
    for (int i = 0; i < _produtos.size(); i++){
        _produtos[i]->print_info();
    }
    cout << "================================" << endl;
}
