#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <string>
#include <iostream>

using namespace std;

class Pedido{

    private:

        list<Produto*> _produtos;
        string _endereco;

    public:

        Pedido(string endereco): _endereco(endereco){}

        void adiciona_produto(Produto *p){
            _produtos.push_back(p);
        }

        float calcula_total(){

            float valor_total=0.0;

            list<Produto*>::iterator it;
            for (it = _produtos.begin(); it != _produtos.end(); it++){
                valor_total += (*it)->get_valor_unitario()*(*it)->get_quantidade();
            }

            return valor_total;
        }

        void print_resumo(){

            list<Produto*>::iterator it;

            cout << "================================" << endl;
            cout << "Pedido - Endereco: " << _endereco << endl;
            cout << "Valor total: " << calcula_total() << endl;

            for (it = _produtos.begin(); it != _produtos.end(); it++){
                (*it)->print_info();
            }
            cout << "================================" << endl;

        }     

};

#endif
