#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valor_unitario, 
  int pedacos, bool borda_recheada, std::string sabor) :
  Produto(quantidade, valor_unitario), _pedacos(pedacos), 
  _borda_recheada(borda_recheada), _sabor(sabor) {}

std::string Pizza::get_sabor() {
  return(this->_sabor);
}

/* Sobrepoe a funcao print de produto, imprimindo informacoes da Pizza */
void Pizza::print() {
  std::cout << "Pizza de " << this->get_sabor() << std::endl;
  std::cout << "\tQuantidade: " << this->get_quantidade() << std::endl;
  std::cout << "\tValor Unitario: " << this->get_valor_unitario() << std::endl;
  std::cout << "\tPedacos: " << this->_pedacos << std::endl;

  if (this->_borda_recheada) std::cout << "\tBorda Recheada" << std::endl;
}