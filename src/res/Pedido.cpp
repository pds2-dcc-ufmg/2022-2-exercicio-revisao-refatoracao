#include "Pedido.hpp"


Pedido::Pedido(string endereco) {
    this->_endereco = endereco;
}

/*passando por referência para diminuir overhead e não precisar fazer cópia*/
void Pedido::adiciona_produto(unique_ptr<Produto> &prod) { 
    this->_produtos.push_back(move(prod));
}

double Pedido::calcula_total() {
    double valor_total = 0.0;

    for (auto it = this->_produtos.begin(); it != this->_produtos.end(); ++it){
        valor_total += (*it)->get_valor_unitario() * (*it)->get_quantidade();
    }
    
    return valor_total;
}

void Pedido::print_resumo() {
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << this->_endereco << endl;
    cout << "Valor total: " << this->calcula_total() << endl;

    for (auto it = this->_produtos.begin(); it != this->_produtos.end(); ++it) {
        (*it)->print();
    }
    cout << "================================" << endl;
}