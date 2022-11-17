#include "pedido.hpp"


pedido::pedido(string endereco): _endereco(endereco){}


void pedido::adicionaProduto(produto *p){
            _produtos.push_back(p);
        }

float pedido::calculaTotal(){
            float val=0.0;
            list<produto*>::iterator it;
            for (auto it = _produtos.begin(); it != _produtos.end(); it++){
                val += ((*it) -> getValorUnitario()) * ((*it)-> getQuantidade());
            }
            return val;
}

void pedido::printResumo(){
            list<produto*>::iterator it;
            cout << "================================" << endl;
            cout << "Pedido - Endereco: " << _endereco << endl;
            cout << "Valor total: " << calculaTotal() << endl;
            for (it = _produtos.begin(); it != _produtos.end(); it++){
                (*it)->print();
            }
            cout << "================================" << endl;
        }

