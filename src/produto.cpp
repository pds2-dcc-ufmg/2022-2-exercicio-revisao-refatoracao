#include <iostream>
#include "produto.hpp"



produto::produto(int quantidade, float valor_unitario): _quantidade(quantidade), _valorUnitario(valor_unitario){}

int produto::getQuantidade(){
    return this -> _quantidade;
}

float produto::getValorUnitario(){
    return this -> _valorUnitario;
}

