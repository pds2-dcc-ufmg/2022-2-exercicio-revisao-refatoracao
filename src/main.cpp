#include "Pedido.hpp"
#include "Produto.hpp"
#include "Hamburguer.hpp"
#include "Pizza.hpp"

#include <iostream>
#include <memory>

using namespace std;

int main() {

string endereco_do_pedido;
getline(cin, endereco_do_pedido);

Pedido pedidos(endereco_do_pedido);

string tipo;
while (cin >> tipo) {

    if (tipo == "Pizza") {
        string sabor;

        int quantidade, pedacos, borda_recheada;            
        double valor_unitario;

        cin >> sabor;
        cin >> pedacos;
        cin >> borda_recheada;
        cin >> valor_unitario;
        cin >> quantidade;

        if (borda_recheada == 1) {
            valor_unitario = valor_unitario * TARIFA_BORDA_RECHEADA;
        }

        unique_ptr<Produto> pizza_calabresa (new Pizza(quantidade, valor_unitario, pedacos, borda_recheada, sabor));
        pedidos.adiciona_produto(pizza_calabresa);
    }

    else if (tipo == "Hamburguer") {
        int quantidade, hamburguer_eh_artesanal;
        double valor_unitario;
        string tipo_do_hamburguer;

        cin >> tipo_do_hamburguer;
        cin >> hamburguer_eh_artesanal;
        cin >> valor_unitario;
        cin >> quantidade;

        if (hamburguer_eh_artesanal == 1) {
            valor_unitario = valor_unitario * TARIFA_ARTESANAL;
        }

        unique_ptr<Produto> hamburguer (new Hamburguer(quantidade, valor_unitario, tipo_do_hamburguer, hamburguer_eh_artesanal)); 
        pedidos.adiciona_produto(hamburguer);
    }

}
    pedidos.print_resumo();
    return 0;
}