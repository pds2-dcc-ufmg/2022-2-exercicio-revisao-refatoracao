#include "pedido.hpp"

    Pedido::Pedido(string endereco): _endereco(endereco) {}

    void Pedido::adiciona_produto(shared_ptr<Produto> p) {
        _produtos.push_back(p);
    }

    float Pedido::calcula_total() {

        float valor_total=0.0;

        list<shared_ptr<Produto>>::iterator it;
        for(it = _produtos.begin(); it != _produtos.end(); it++) {
            valor_total += (*it)->get_valor_unitario()*(*it)->get_quantidade();
        }

        return valor_total;
    }

    void Pedido::print_resumo() {

        list<shared_ptr<Produto>>::iterator it;

        cout << "================================" << endl;
        cout << "Pedido - Endereco: " << _endereco << endl;
        cout << "Valor total: " << calcula_total() << endl;

        for(it = _produtos.begin(); it != _produtos.end(); it++) {
            (*it)->print_info();
        }
        cout << "================================" << endl;

    }     