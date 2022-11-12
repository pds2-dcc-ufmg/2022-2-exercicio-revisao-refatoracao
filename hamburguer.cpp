#include "hamburguer.hpp"



Hamburguer::Hamburguer(int q, float valor_unitario, std::string tipo, bool artesanal) : Produto(q, valor_unitario), _tipo(tipo), artesanal(artesanal)
{
    _tipo = tipo;
}

void Hamburguer::print()
{
    std::cout << "Hamburguer" << std::endl;
    std::cout << "\tQuantidade: " << this->get_q() << std::endl;
    std::cout << "\tValor Unitario: " << this->get_valorUnitario() << std::endl;
    std::cout << "\tTipo: " << _tipo << std::endl;
    if (artesanal)
        std::cout << "\tArtesanal" << std::endl;
}

std::string Hamburguer::get_tipo()
{
    return _tipo;
}