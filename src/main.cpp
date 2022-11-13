#include "hamburguer.hpp"
#include "pedido.hpp"
#include "pizza.hpp"
#include "produto.hpp"

#include <iostream>
#include <memory>

#define ACRESCIMO_BORDA_RECHEADA 1.4
#define ACRESCIMO_ARTESANAL 2.0

int main() {
    std::string line, tipo;
    std::getline(std::cin, line);
    Pedido pedidos(line);
    int quantidade;
    float valorUnitario;

    while (std::cin >> tipo) {
        if (tipo == "Pizza") {
            bool bordaRecheada;
            int pedacos;
            std::string sabor;

            std::cin >> sabor >> pedacos >> bordaRecheada >> valorUnitario >> quantidade;
            
            if (bordaRecheada == true) valorUnitario *= ACRESCIMO_BORDA_RECHEADA;
            
            pedidos.adicionaProduto(quantidade, valorUnitario, pedacos, bordaRecheada, sabor);
            
        } else if (tipo == "Hamburguer") {
            bool artesanal;

            std::cin >> tipo >> artesanal >> valorUnitario >> quantidade;

            if (artesanal == true) valorUnitario *= ACRESCIMO_ARTESANAL;

            pedidos.adicionaProduto(quantidade, valorUnitario, tipo, artesanal);
        }
    }

    pedidos.printResumo();
    return 0;
}
