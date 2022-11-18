#include "pizza.hpp"

Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech): Produto(q, valor_unitario), _pedacos(pedacos), _isBordaRecheada(borda_rech){}

bool Pizza::get_isBordaRecheada(){
    return _isBordaRecheada;
}       

int Pizza::get_pedacos(){
    return _pedacos;
}
    
void Pizza::print(){
    cout << "Pizza de " << this->get_sabor() << endl;
    cout << "\tQuantidade: " << this->get_quantidade() << endl;
    cout << "\tValor Unitario: " << this->get_valorUnitario() << endl;
    cout << "\tPedacos: " << this->get_pedacos() << endl;
    if (this->_isBordaRecheada) 
        cout << "\tBorda Recheada" << endl;
    }


        