#include "pizza.hpp"

namespace Cardapio{

    Pizza::Pizza(int qtd_produto, float valor_unitario, int qtd_pedacos, bool borda_recheada, string sabor):
    Produto(qtd_produto, valor_unitario){

        this->_quantidade_pedacos = qtd_pedacos;
        this->_borda_recheada = borda_recheada;
        this->_sabor = sabor;
    }

    string Pizza::get_sabor(){
        return this->_sabor;
    }

    int Pizza::get_quantidade_pedacos(){
        return this->_quantidade_pedacos;
    }

    bool Pizza::get_borda_recheada(){
        return this->_borda_recheada;
    }

    void Pizza::print(){
        cout << "Pizza de " << this->_sabor << endl;
        cout << "\tQuantidade: " << this->get_quantidade_produto() << endl;
        cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
        cout << "\tPedacos: " << this->_quantidade_pedacos << endl;
        if (this->_borda_recheada) 
            cout << "\tBorda Recheada" << endl;
    }
}