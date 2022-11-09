#include "Hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, std::string tipo,
    bool is_artesanal) : Produto(quantidade, valor_unitario), 
    _tipo(tipo), _is_artesanal(is_artesanal) { }

std::string Hamburguer::get_tipo() {
    return this->_tipo;
}

bool Hamburguer::is_artesanal() {
    return this->_is_artesanal;
}

void Hamburguer::print_info() {
    std::cout << "Hamburguer" << std::endl;
    
    std::cout << "\tQuantidade: " << get_quantidade() << std::endl;

    std::cout << "\tValor Unitario: " << get_valor_unitario() << std::endl;

    std::cout << "\tTipo: " << get_tipo() << std::endl;

    if (is_artesanal()) {
        std::cout << "\tArtesanal" << std::endl;
    }
}