#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, std::string sabor) :
Produto(quantidade, valorUnitario), _pedacos(pedacos), _bordaRecheada(bordaRecheada), _sabor(sabor) {}

Pizza::~Pizza() {}

void Pizza::print() {

    std::cout << "Pizza de " << this->_sabor << std::endl;
    std::cout << "\t" << "Quantidade: " << this->getQuantidade() << std::endl;
    std::cout << "\t" << "Valor Unitario: " << this->getValorUnitario() << std::endl;
    std::cout << "\t" << "Pedacos: " << this->_pedacos << std::endl;
    if (this->_bordaRecheada)
        std::cout << "\tBorda Recheada" << std::endl;
}