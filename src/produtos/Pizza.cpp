#include "Pizza.hpp"

Pizza::Pizza(int quantidade, float valor_unitario,std::string sabor,
    int pedacos, bool borda_rech) : Produto(quantidade, valor_unitario),
    _sabor(sabor), _quant_pedaco(pedacos), _is_borda_rech(borda_rech) { }

std::string Pizza::get_sabor() {
    return this->_sabor;
}

int Pizza::get_quant_pedaco() {
    return this->_quant_pedaco;
}

bool Pizza::is_borda_rech() {
    return this->_is_borda_rech;
}

void Pizza::print_info() {
    std::cout << "Pizza de " << get_sabor() << std::endl;

    std::cout << "\tQuantidade: " << get_quantidade() << std::endl;

    std::cout << "\tValor Unitario: " << get_valor_unitario() << std::endl;

    std::cout << "\tPedacos: " << get_quant_pedaco() << std::endl;

    if (is_borda_rech()) {
        std::cout << "\tBorda Recheada" << std::endl;
    }
}