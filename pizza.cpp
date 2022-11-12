#include "pizza.hpp"



Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech) : Produto(q, valor_unitario), _pedacos(pedacos), borda_recheada(borda_rech)
{
    _pedacos = pedacos;
}

void Pizza::print()
{
    std::cout << "Pizza de " << this->get_sabor() << std::endl;
    std::cout << "\tQuantidade: " << this->get_q() << std::endl;
    std::cout << "\tValor Unitario: " << this->get_valorUnitario() << std::endl;
    std::cout << "\tPedacos: " << _pedacos << std::endl;
    if (borda_recheada)
        std::cout << "\tBorda Recheada" << std::endl;
}

int Pizza::get_pedacos()
{
    return _pedacos;
}