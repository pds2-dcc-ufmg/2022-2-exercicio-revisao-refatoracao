#include "pizza.hpp"

Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech, string sabor) : Produto(q, valor_unitario){
    this->_pedacos = pedacos;
    this->_borda_recheada = borda_rech;
    this->_sabor = sabor;
}

void Pizza::print(){
    cout << "Pizza de " << this->get_sabor() << endl;
    cout << "\tQuantidade: " << this->get_q() << endl;
    cout << "\tValor Unitario: " << this->get_valorUnitario() << endl;
    cout << "\tPedacos: " << this->_pedacos << endl;
    if (this->_borda_recheada) cout << "\tBorda Recheada" << endl;
}

string Pizza::get_sabor(){
    return(this->_sabor);
}

int Pizza::get_pedacos(){
    return(this->_pedacos);
}
