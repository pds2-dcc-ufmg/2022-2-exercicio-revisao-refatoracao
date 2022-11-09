#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <iostream>

int main(){
    std::string line, tipo;
    std::getline(std::cin, line);
    Pedido pedidos(line);


    while(std::cin >> tipo){
        float taxa_adicional;

        if(tipo == "Pizza"){
            Produto* produto;
            std::string sabor;
            int quantidade, pedacos, borda_recheada;            
            float valor_unitario;

            std::cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;

            if(borda_recheada == 1){
                taxa_adicional = 1.4;
                valor_unitario = valor_unitario*taxa_adicional;
            }

            if (sabor == "Calabresa"){
                produto = new Pizza_calabresa(quantidade, valor_unitario, pedacos, borda_recheada);
                pedidos.adiciona_produto(produto);
            }
            else if (sabor == "Marguerita"){
                produto = new Pizza_marguerita(quantidade, valor_unitario, pedacos, borda_recheada);
                pedidos.adiciona_produto(produto);
            }

            
        }
        else if(tipo == "Hamburguer"){
            Produto* produto;
            int quantidade, artesanal;
            float valor_unitario;
            std::string tipo;

            std::cin >> tipo >> artesanal >> valor_unitario >> quantidade;

            if(artesanal == 1){
                taxa_adicional = 2.0;
                valor_unitario = taxa_adicional*valor_unitario;
            }

            produto = new Hamburguer(quantidade, valor_unitario, tipo, artesanal);
            pedidos.adiciona_produto(produto);

        }
    }

    pedidos.print_resumo();

    return 0;
}