#include"pizza.hpp"


Pizza::Pizza(int q, float valorUnitario, int pedacos, bool borda_rechada, string sabor):Produto::Produto(q, valorUnitario){
    this->_pedacos=pedacos; 
    this->_borda_recheada=borda_rechada; 
    this->_sabor=sabor; 
} 

string Pizza::get_sabor(){
    return this->_sabor; 
}

int Pizza::get_pedacos(){
    return this->_pedacos; 
}

bool Pizza::get_borda_recheada(){
    return this-> _borda_recheada; 
}

void Pizza::print(){
    cout << "Pizza de " << get_sabor() << endl;
    cout << "\tQuantidade: " << get_q() << endl;
    cout << "\tValor Unitario: " << get_valorUnitario() << endl;
    cout << "\tPedacos: " << get_pedacos() << endl;
    if (this->_borda_recheada==1){
        cout << "\tBorda Recheada" << endl;  
    } 
}

