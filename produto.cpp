#include "produto.hpp"

Produto::Produto(string tipo, int quantidade, float valor_unitario)
    : _tipo(tipo), _quantidade(quantidade), _valor_unitario(valor_unitario){

}

string Produto::getTipo(){
    return _tipo;
}

int Produto::getQuantidade(){
    return _quantidade;
}

float Produto::getValor(){
    return _valor_unitario;
}

void Produto::setValor(float valor){
    _valor_unitario = valor;
}

void Produto::print_info(){
    cout << "\tQuantidade: " << this->getQuantidade() 
    << endl << "\tValor Unitario: " << this->getValor() << endl; 
}
