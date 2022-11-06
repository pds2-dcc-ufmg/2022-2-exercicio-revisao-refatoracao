#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

int main() {
    string endereco_cliente;
    string tipo_produto;

    getline(cin, endereco_cliente);
    Pedido pedidos(endereco_cliente);
    
    while (cin >> tipo_produto) {
        if (tipo_produto == "Pizza") {
            Produto* prod;
            string sabor;

            int quantidade, pedacos;
            bool borda_recheada;            
            float valor_unitario;

            cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;

            prod = new Pizza(quantidade, valor_unitario, sabor, pedacos, borda_recheada);
            pedidos.adiciona_produto(prod);
        }

        else if (tipo_produto == "Hamburguer") {
            Produto* prod;
            string tipo_hamburguer;

            int quantidade;
            float valor_unitario;
            bool artesanal;

            cin >> tipo_hamburguer >> artesanal >> valor_unitario >> quantidade;

            prod = new Hamburguer(quantidade, valor_unitario, tipo_hamburguer, artesanal);
            pedidos.adiciona_produto(prod);
        }
    }
    pedidos.print_resumo();
    return 0;
}