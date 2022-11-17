#include "pizza.hpp"



Pizza::Pizza(std::string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_rech) : Produto(quantidade, valor_unitario), _pedacos(pedacos), borda_recheada(borda_rech)
{
    _sabor= sabor;
    _pedacos = pedacos;
}

void Pizza::print()
{
    std::cout << "Pizza de " << this->get_sabor() << std::endl;
    std::cout << "\tQuantidade: " << this->get_quantidade() << std::endl;
    std::cout << "\tValor Unitario: " << this->get_valor_unitario() << std::endl;
    std::cout << "\tPedacos: " << _pedacos << std::endl;
    if (borda_recheada)
        std::cout << "\tBorda Recheada" << std::endl;
}

int Pizza::get_pedacos()
{
    return _pedacos;
}

std::string Pizza::get_sabor(){
    return _sabor;
}