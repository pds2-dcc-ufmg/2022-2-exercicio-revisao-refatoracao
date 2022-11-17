#include "pizza.hpp"

Pizza::Pizza(int quant, float preco, int fatias, bool borda, std::string sabor):
Produto(quant, preco), _fatias(fatias), _borda_recheada(borda), _sabor(sabor) {}

int Pizza::get_fatias() {
    return _fatias;
}

bool Pizza::get_borda() {
    return _borda_recheada;
}

void Pizza::print_info(){
    std::cout << "Pizza de " << _sabor << std::endl;
    std::cout << "\tQuantidade: " << get_quant() << std::endl;
    std::cout << "\tValor Unitario: " << get_preco() << std::endl;
    std::cout << "\tPedacos: " << get_fatias() << std::endl;
    if ( get_borda() ) std::cout << "\tBorda Recheada" << std::endl;
}