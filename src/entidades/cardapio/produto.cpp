#include "produto.hpp"

namespace Cardapio{

    Produto::Produto(int quantidade_produto, float valor_unitario){

        this->_quantidade_produto = quantidade_produto;
        this->_valor_unitario = valor_unitario;
    }

    int Produto::get_quantidade_produto(){
        return this->_quantidade_produto;
    }

    float Produto::get_valor_unitario(){
        return this->_valor_unitario;
    }
}