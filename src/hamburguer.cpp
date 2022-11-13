#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valorUnitario, std::string tipo, bool artesanal) : Produto(quantidade, valorUnitario) {
    this->_tipo = tipo;
    this->_artesanal = artesanal;
}

void Hamburguer::print() {
    std::cout << "Hamburguer" << std::endl;
    std::cout << "\tQuantidade: " << this->getQuantidade() << std::endl;
    std::cout << "\tValor Unitario: " << this->getValorUnitario() << std::endl;
    std::cout << "\tTipo: " << this->_tipo << std::endl;
    if (this->_artesanal) std::cout << "\tArtesanal" << std::endl;
}
