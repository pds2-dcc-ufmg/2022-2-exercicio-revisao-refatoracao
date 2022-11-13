#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, std::string sabor) : Produto (quantidade, valorUnitario) {
    this->_pedacos = pedacos;
    this->_bordaRecheada = bordaRecheada;
    this->_sabor = sabor;
}

void Pizza::print() {
    std::cout << "Pizza de " << this->getSabor() << std::endl;
    std::cout << "\tQuantidade: " << this->getQuantidade() << std::endl;
    std::cout << "\tValor Unitario: " << this->getValorUnitario() << std::endl;
    std::cout << "\tPedacos: " << this->_pedacos << std::endl;
    if (this->_bordaRecheada) std::cout << "\tBorda Recheada" << std::endl;
}

std::string Pizza::getSabor() {
    return this->_sabor;
}
