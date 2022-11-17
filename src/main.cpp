#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

int main(){
    std::string endereco;
    std::getline(std::cin, endereco);

    Pedido pedidos(endereco);
    float taxa_borda = 1.4;
    float taxa_artesanal = 2.0;

    std::string tipo;
    while(std::cin >> tipo){

        if(tipo == "Pizza"){
            Produto* prod;

            std::string sabor;
            int quant, fatias, borda;            
            float preco;
            std::cin >> sabor >> fatias >> borda >> preco >> quant;

            if(borda == 1) preco = preco * taxa_borda;
            prod = new Pizza(quant, preco, fatias, borda, sabor);
            pedidos.adicionar_produto(prod);
        }

        else if(tipo == "Hamburguer"){
            Produto* prod;
            int quant, artesanal;
            float preco;
            std::string tipo;
            std::cin >> tipo >> artesanal >> preco >> quant;
            
            if(artesanal == 1) preco = preco * taxa_artesanal;
            prod = new Hamburguer(quant, preco, tipo, artesanal);
            pedidos.adicionar_produto(prod);
        }
    }
    pedidos.print_resumo();

    std::list<Produto*> pedidocompleto = pedidos.get_produtos();
    for(std::list<Produto*>::iterator it = pedidocompleto.begin(); it != pedidocompleto.end(); it++) {
        delete (*it);
    }

    return 0;
}