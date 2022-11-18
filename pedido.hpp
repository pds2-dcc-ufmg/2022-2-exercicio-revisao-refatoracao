#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>
using namespace std;

class Pedido {
    public:
        Pedido(string endereco) : _endereco(endereco) {}

        void adiciona_produto(produto *p) {
            _produtos.push_back(p);
        }

        float calcula_total() {
            float val=0.0;

            list<produto*>::iterator it;
            for (it = _produtos.begin(); it != _produtos.end(); it++) {
                val += (*it)->valorUnitario*(*it)->quant;
            }
            return val;
        }

        void print_resumo() {
            list<produto*>::iterator it;

            cout << "================================" << endl;
            cout << "Pedido - Endereco: " << _endereco << endl;
            cout << "Valor total: " << calcula_total() << endl;
            for (it = _produtos.begin(); it != _produtos.end(); it++) {
                (*it)->print();
            }
            cout << "================================" << endl;
        }

    private:
        list<produto*> _produtos;
        string _endereco;

};

#endif
