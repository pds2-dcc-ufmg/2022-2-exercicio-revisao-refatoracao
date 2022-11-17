#include "pedido.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"

int main(){
    string tipo, endereco, sabor;
    bool borda_recheada, artesanal;
    int quantidade, npedacos;
    float valor_unitario;

    getline(cin, endereco);
    Pedido *pedido = new Pedido(endereco);

    while(cin >> tipo){
        if (tipo == "Pizza") {
            cin >> sabor >> npedacos >> borda_recheada >> valor_unitario >> quantidade;

            Pizza *pizza = new Pizza(quantidade, valor_unitario, npedacos, borda_recheada, sabor);
            pedido->adiciona_produto(pizza);
        }
        else if (tipo == "Hamburguer") {
            cin >> tipo >> artesanal >> valor_unitario >> quantidade;

            Hamburguer *hamburguer = new Hamburguer(quantidade, valor_unitario, tipo, artesanal);
            pedido->adiciona_produto(hamburguer);
        }
    }

    pedido->print_resumo();
    delete pedido;
    return 0;
}