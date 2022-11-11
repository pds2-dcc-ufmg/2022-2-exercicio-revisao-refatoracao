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

        cin >> sabor >> pedacos >> borda_recheada;
        cin >> valor_unitario >> quantidade;

        pedidos.adiciona_pizza(quantidade, pedacos, borda_recheada, valor_unitario, sabor);
    }

    else if (tipo == "Hamburguer") {
        int quantidade, hamburguer_eh_artesanal;
        double valor_unitario;
        string tipo_do_hamburguer;

        cin >> tipo_do_hamburguer >> hamburguer_eh_artesanal;
        cin >> valor_unitario >> quantidade;

        pedidos.adiciona_hamburguer(quantidade, valor_unitario, tipo_do_hamburguer, hamburguer_eh_artesanal);
    }

}
    pedidos.print_resumo();
    return 0;
}