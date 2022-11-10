#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

int main(){
    string line;
    string tipo;
    float valor;
    int quantidade;
    Produto* prod;

    getline(cin, line);
    Pedido pedidos(line);

    while(cin >> tipo){
        if(tipo == "Pizza"){
            string sabor;
            int pedacos,borda;
            cin >> sabor >> pedacos >> borda >> valor >> quantidade;
            if(borda == 1){
                valor = valor*1.4;
            }
            prod = new Pizza(quantidade,valor, pedacos,borda, sabor);

        }
        else if(tipo == "Hamburguer"){
            int artesanal;
            cin >> tipo >> artesanal >> valor >> quantidade;
            if(artesanal == 1){
                valor = valor*2.0;
            }
            prod = new Hamburguer(quantidade, valor, tipo, artesanal);
        }
        pedidos.adiciona_produto(prod);
    }
    pedidos.print_resumo();
    return 0;
}