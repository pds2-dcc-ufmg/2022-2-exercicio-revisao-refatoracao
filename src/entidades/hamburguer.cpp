#include "hamburguer.hpp"



Hamburguer::Hamburguer(int quantidade, float valor_unitario, std::string tipo, bool artesanal) : Produto(quantidade, valor_unitario), _tipo(tipo), artesanal(artesanal)
{
    _tipo = tipo;
}

void Hamburguer::print()
{
    std::cout << "Hamburguer" << std::endl;
    std::cout << "\tQuantidade: " << this->get_quantidade() << std::endl;
    std::cout << "\tValor Unitario: " << this->get_valor_unitario() << std::endl;
    std::cout << "\tTipo: " << _tipo << std::endl;
    if (artesanal)
        std::cout << "\tArtesanal" << std::endl;
}

std::string Hamburguer::get_tipo()
{
    return _tipo;
}