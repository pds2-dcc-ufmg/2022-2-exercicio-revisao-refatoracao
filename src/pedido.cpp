#include "pedido.hpp"

Pedido::Pedido(string endereco): endereco(endereco){}

void Pedido::adicionar_produto(int quant, float valor, int pedacos, bool borda_recheada, string sabor){
    _produtos.push_back(unique_ptr<Produto>(new Pizza(quant, valor, pedacos, borda_recheada, sabor)));
}

void Pedido::adicionar_produto(int quant, float valor, string tipo, bool artesanal){
    _produtos.push_back(unique_ptr<Produto>(new Hamburguer(quant, valor, tipo, artesanal)));
}

float Pedido::calcula_total(){
    float val=0.0;
    list<unique_ptr<Produto>>::iterator it;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        val += (*it)->get_valor()*(*it)->get_q();
    }
    return val;
}

void Pedido::print_resumo(){
    list<unique_ptr<Produto>>::iterator it;
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << endereco << endl;
    cout << "Valor total: " << calcula_total() << endl;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        (*it)->print();
    }
    cout << "================================" << endl;
}