#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "produto.hpp"

#include <list>
#include <iostream>
#include <memory>

class Pedido{
  private:
    std::list<std::shared_ptr<Produto>> _produtos;
    
    std::string _endereco;
  public:
    Pedido(std::string endereco);

    void adiciona_produto(std::shared_ptr<Produto> p);

    float calcula_total();

    void print_resumo();
};

#endif
