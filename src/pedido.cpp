#include "pedido.hpp"


pedido::pedido(string endereco): _endereco(endereco){}


void pedido::adiciona_produto(produto *p){
            _produtos.push_back(p);
        }

float pedido::calcula_total(){
            float val=0.0;
            list<produto*>::iterator it;
            for (auto it = _produtos.begin(); it != _produtos.end(); it++){
                val += ((*it) -> getValorUnitario()) * ((*it)-> getQuantidade());
            }
            return val;
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

