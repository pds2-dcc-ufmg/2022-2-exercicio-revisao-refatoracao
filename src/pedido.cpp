#include "pedido.hpp"

Pedido::Pedido(std::string endereco): _endereco(endereco){}

void Pedido::adiciona_produto(Produto *produto){
    _produtos.push_back(produto);
}

Pedido::~Pedido(){
    for(auto produto: _produtos){
        delete produto;
    }
}

float Pedido::calcula_total(){
            float total=0.0;
            std::list<Produto*>::iterator it;
            for (it = _produtos.begin(); it != _produtos.end(); it++){
                total += (*it)->get_valor_unitario()*(*it)->get_quantidade();
            }
            return total;
        }

void Pedido::print_resumo(){
            std::list<Produto*>::iterator it;
            std::cout << "================================" << std::endl;
            std::cout << "Pedido - Endereco: " << _endereco << std::endl;
            std::cout << "Valor total: " << calcula_total() << std::endl;
            for (it = _produtos.begin(); it != _produtos.end(); it++){
                (*it)->print();
            }
            std::cout << "================================" << std::endl;
        } 