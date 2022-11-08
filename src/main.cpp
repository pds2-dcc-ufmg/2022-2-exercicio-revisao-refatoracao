#include "Pedido.hpp"
#include "Produto.hpp"
#include "Hamburguer.hpp"
#include "Pizza.hpp"
#include "PizzaCalabresa.hpp"
#include "PizzaMarguerita.hpp"

#include <iostream>

using namespace std;

int main() {

string endereco_do_pedido;
getline(cin, endereco_do_pedido);

Pedido pedidos(endereco_do_pedido);

string tipo;
while(cin >> tipo) {

    if (tipo == "Pizza") {
        Produto* prod;
        string sabor;

        int quantidade, pedacos, borda_recheada;            
        float valor_unitario;

        cin >> sabor;
        cin >> pedacos;
        cin >> borda_recheada;
        cin >> valor_unitario;
        cin >> quantidade;

        if(borda_recheada == 1) {
            valor_unitario = valor_unitario * TARIFA_BORDA_RECHEADA;
        }

        if (sabor == "Calabresa") {
            prod = new PizzaCalabresa(quantidade, valor_unitario, pedacos, borda_recheada);
            pedidos.adiciona_produto(prod);
        }

        else if (sabor == "Marguerita") {
            prod = new PizzaMarguerita(quantidade, valor_unitario, pedacos, borda_recheada);
            pedidos.adiciona_produto(prod);
        }
    }

    else if (tipo == "Hamburguer") {
        Produto* prod;

        int quantidade, hamburguer_artesanal;
        float valor_unitario;
        string tipo;

        cin >> tipo;
        cin >> hamburguer_artesanal;
        cin >> valor_unitario;

        if(hamburguer_artesanal == 1) {
            valor_unitario = valor_unitario * TARIFA_ARTESANAL;
        }

        prod = new Hamburguer(quantidade, valor_unitario, tipo, hamburguer_artesanal);
        pedidos.adiciona_produto(prod);
    }

}
    pedidos.print_resumo();
    return 0;
}