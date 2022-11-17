#include "pedido.hpp"

Pedido::Pedido(std::string endereco): _endereco(endereco){}

std::list<Produto*> Pedido::get_produtos() {
    return _produtos;
}

void Pedido::adicionar_produto(Produto *p){
    _produtos.push_back(p);
}

float Pedido::calcular_total() {
    float val=0.0;
    std::list<Produto*>::iterator it;
    for (it = _produtos.begin(); it != _produtos.end(); it++){
        val += (*it)->get_preco() * (*it)->get_quant();
    }
    return val;
}

void Pedido::print_resumo(){
            std::list<Produto*>::iterator it;
            std::cout << "================================" << std::endl;
            std::cout << "Pedido - Endereco: " << _endereco << std::endl;
            std::cout << "Valor total: " << calcular_total() << std::endl;
            for (it = _produtos.begin(); it != _produtos.end(); it++){
                (*it)->print_info();
            }
            std::cout << "================================" << std::endl;
        }
