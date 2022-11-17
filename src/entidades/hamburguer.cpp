#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quant, float preco, std::string tipo, bool artesanal):
Produto(quant, preco), _tipo(tipo), _artesanal(artesanal) {}

void Hamburguer::print_info(){
            std::cout << "Hamburguer" << std::endl;
            std::cout << "\tQuantidade: " << get_quant() << std::endl;
            std::cout << "\tValor Unitario: " << get_preco() << std::endl;
            std::cout << "\tTipo: " << _tipo << std::endl;
            if (_artesanal) std::cout << "\tArtesanal" << std::endl;
        }