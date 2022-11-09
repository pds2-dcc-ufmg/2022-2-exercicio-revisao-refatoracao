#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, std::string tipo, bool artesanal): Produto(quantidade, valor_unitario){
    _tipo = tipo;
    _artesanal = artesanal;
}

void Hamburguer::print(){
    std::cout << "Hamburguer" << std::endl;
    std::cout << "\tQuantidade: " << _quantidade << std::endl;
    std::cout << "\tValor Unitario: " << _valor_unitario << std::endl;
    std::cout << "\tTipo: " << _tipo << std::endl;
    if (_artesanal) std::cout << "\tArtesanal" << std::endl;
}