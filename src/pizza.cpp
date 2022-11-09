#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech): Produto(quantidade, valor_unitario), _pedacos(pedacos), _borda_recheada(borda_rech){}

void Pizza::print(){
    std::cout << "Pizza de " << get_sabor() << std::endl;
    std::cout << "\tQuantidade: " << _quantidade << std::endl;
    std::cout << "\tValor Unitario: " << _valor_unitario << std::endl;
    std::cout << "\tPedacos: " << _pedacos << std::endl;
    if (_borda_recheada) std::cout << "\tBorda Recheada" << std::endl;
}