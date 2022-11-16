#include"produto.hpp"
#include<iostream>

using namespace std; 


Produto::Produto(int q, float valorUnitario){
    this->_q= q; 
    this->_valorUnitario=valorUnitario; 
}

int Produto::get_q(){
    return this->_q; 
}

float Produto::get_valorUnitario(){
    return this->_valorUnitario; 
}

void Produto::set_q(int q){
    this->_q=q; 
}
