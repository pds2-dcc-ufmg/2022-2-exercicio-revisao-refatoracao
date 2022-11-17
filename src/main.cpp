#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"

#include <iostream>
#include <memory>

#define TAXA_BORDA 1.4f;
#define TAXA_ARTESANAL 2.0f;

int main(){
  std::string endereco;
  std::getline(std::cin, endereco);

  Pedido pedidos(endereco);

  std::string tipo;

  while(std::cin >> tipo){

    if(tipo == "Pizza"){

      int quantidade, pedacos;
      float valor_unitario;

      bool borda_recheada;

      std::string sabor;

      std::cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;

      if (borda_recheada == true) {
        valor_unitario = valor_unitario * TAXA_BORDA;
      }

      std::shared_ptr<Produto> produto(new Pizza(quantidade, 
        valor_unitario, pedacos, borda_recheada, sabor));

      pedidos.adiciona_produto(produto);
    }
    else if(tipo == "Hamburguer"){

      int quantidade; 
      float valor_unitario;

      std::string tipo;

      bool artesanal;

      std::cin >> tipo >> artesanal >> valor_unitario >> quantidade;

      if (artesanal == true) {
        valor_unitario = valor_unitario * TAXA_ARTESANAL;
      }

      std::shared_ptr<Produto> produto(new Hamburguer(quantidade, 
        valor_unitario, tipo, artesanal));

      pedidos.adiciona_produto(produto);
    }
  }
  pedidos.print_resumo();

  return 0;
}