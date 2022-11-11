#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valorUnitario, std::string tipo, bool artesanal) :
Produto(quantidade, valorUnitario), _tipo(tipo), _artesanal(artesanal) {}

Hamburguer::~Hamburguer() {}

void Hamburguer::print() {

    std::cout << "Hamburguer" << std::endl;
    std::cout << "\t" << "Quantidade: " << this->getQuantidade() << std::endl;
    std::cout << "\t" << "Valor Unitario: " << this->getValorUnitario() << std::endl;
    std::cout << "\t" << "Tipo: " << this->_tipo << std::endl;
    if (this->_artesanal)
        std::cout << "\t" << "Artesanal" << std::endl;
}