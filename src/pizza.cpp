#include "pizza.hpp"

Pizza::Pizza(int quantidade_pizza, float valor_unitario, int pedacos, bool borda_recheada, string sabor_piza):
    Produto::Produto(quantidade_pizza, valor_unitario){

        this->_pedacos = pedacos;
        this->_borda_recheada = borda_recheada;
        this->_sabor_pizza= sabor_piza;
    }

int Pizza::get_pedacos(){
    return this->_pedacos;
}

bool Pizza::get_borda_recheada(){
    return this->_borda_recheada;
}

string Pizza::get_sabor_pizza(){
    return _sabor_pizza;
}

void Pizza::print(){
        cout << "Pizza de " << this->get_sabor_pizza() << endl;
        cout << "\tQuantidade: " << this->get_quantidade() << endl;
        cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
        cout << "\tPedacos: " << this->get_pedacos() << endl;
        if (this->_borda_recheada){
            cout << "\tBorda Recheada" << endl;
        }
    }
