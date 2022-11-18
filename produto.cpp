#include "produto.hpp"

produto::produto(){}

produto::produto(int _quantidade, float valor_unitario){
    quantidade = _quantidade;
    _valor_unitario = valor_unitario;
}


int produto::get_quantidade(){
    return quantidade;
}

float produto::get_valor_unitario(){
    return _valor_unitario;
}