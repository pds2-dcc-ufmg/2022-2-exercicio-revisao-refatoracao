#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, 
  std::string tipo, bool artesanal) :
  Produto(quantidade, valor_unitario), 
  _tipo(tipo), _artesanal(artesanal) {}

/* Sobrepoe a funcao print de produto, imprimindo informacoes do hamburguer */
void Hamburguer::print() {
  std::cout << "Hamburguer" << std::endl;
  std::cout << "\tQuantidade: " << get_quantidade() << std::endl;
  std::cout << "\tValor Unitario: " << get_valor_unitario() << std::endl;
  std::cout << "\tTipo: " << _tipo << std::endl;

  if (this->_artesanal) std::cout << "\tArtesanal" << std::endl;
}