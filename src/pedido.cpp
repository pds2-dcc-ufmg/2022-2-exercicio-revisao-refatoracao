#include "pedido.hpp"

Pedido::Pedido(std::string endereco) : _endereco(endereco) {}

void Pedido::adiciona_produto(std::shared_ptr<Produto> p) {
  _produtos.push_back(p);
}

/* Percorre a lista de produtos somando valores, retornando o total do pedido */
float Pedido::calcula_total() {
  float total = 0.0f;

  /* Percorre multiplicando o valor de cada produto pela quantidade pedida */
  std::list<std::shared_ptr<Produto>>::iterator it;
  for (it = _produtos.begin(); it != _produtos.end(); it++){
    total += (*it)->get_valor_unitario() * (*it)->get_quantidade();
  }

  return(total);
}

void Pedido::print_resumo() {
  std::cout << "================================" << std::endl;
  std::cout << "Pedido - Endereco: " << this->_endereco << std::endl;
  std::cout << "Valor total: " << calcula_total() << std::endl;

  /* Percorre a lista printando a informacao de cada produto */
  std::list<std::shared_ptr<Produto>>::iterator it;
  for (it = _produtos.begin(); it != _produtos.end(); it++){
    (*it)->print();
  }

  std::cout << "================================" << std::endl;
}