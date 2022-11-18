#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "tipo_pizza.hpp"
#include <iostream>

using namespace std;

int main(){
    
    //guarda pedidos
    string line;
    getline(cin, line);
    Pedido pedidos(line);

    string tipo;
    while(cin >> tipo) {

        //guarda pedidos tipo "pizza"
        if(tipo == "Pizza"){
            produto* prod;
            string sabor;
            int quant, n_pedac, borda_rech;            
            float valor;

            cin >> sabor >> n_pedac >> borda_rech >> valor >> quant;
            if(borda_rech == 1){
                valor = valor*1.4;
            }
            if (sabor == "Calabresa"){
                prod = new pizza_calabresa(quant, valor, n_pedac, borda_rech);
                pedidos.adiciona_produto(prod);
            }
            else if (sabor == "Marguerita"){
                prod = new pizza_marguerita(quant, valor, n_pedac, borda_rech);
                pedidos.adiciona_produto(prod);
            }
        }
        //protocolo para pedidos do tipo "hamburguer"
        else if(tipo == "Hamburguer") {
            produto* prod;
            int quant;
            float valor;
            string tipo;
            int artesa;

            cin >> tipo >> artesa >> valor >> quant;
            if(artesa == 1) {
                valor = 2.0*valor;
            }
            prod = new hamburguer(quant, valor, tipo, artesa);
            pedidos.adiciona_produto(prod);
        }
    }

    pedidos.print_resumo();

    return 0;
}