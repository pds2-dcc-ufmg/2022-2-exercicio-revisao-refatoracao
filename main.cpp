#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <iostream>

using namespace std;

int main() {

    string endereco_cliente;
    string tipo_produto;

    getline(cin, endereco_cliente);
    Pedido pedidos(endereco_cliente);
    
    while(cin >> tipo_produto) {
            
        if(tipo_produto == "Pizza") {
            produto* prod;
            string sabor;

            int quantidade, pedacos, borda_recheada;            
            float valor_unitario;

            cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;

            if(borda_recheada == 1) {
                float taxa_recheio = 1.4;
                valor_unitario = valor_unitario * taxa_recheio;
            }

            if (sabor == "Calabresa") {
                prod = new pizza_calabresa(quantidade, valor_unitario, pedacos, borda_recheada);
                pedidos.adiciona_produto(prod);
            }

            else if (sabor == "Marguerita") {
                prod = new pizza_marguerita(quantidade, valor_unitario, pedacos, borda_recheada);
                pedidos.adiciona_produto(prod);
            }
        }

        else if(tipo_produto == "Hamburguer"){
            produto* prod;
            string tipo_hamburguer;
            int quantidade, artesanal;
            float valor_unitario;
            
            cin >> tipo_hamburguer >> artesanal >> valor_unitario >> quantidade;

            if(artesanal == 1) {
                float taxa_artesanal = 2.0;
                valor_unitario = valor_unitario * taxa_artesanal;
            }

            prod = new hamburguer(quantidade, valor_unitario, tipo_hamburguer, artesanal);
            pedidos.adiciona_produto(prod);
        }
    }

    pedidos.print_resumo();
    return 0;
}