#include "pedido.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"

#include <iostream>

#define TAXA_BORDA_RECHEADA 1.4
#define TAXA_ARTESANAL 2.0

using namespace Cardapio;
using namespace std;

int main(){

    string endereco;
    getline(cin, endereco);
    Pedido pedidos(endereco);
    string tipo_de_comida;

    Produto* prod;
    int quantidade_produto;
    float valor_unitario;
    
    while(cin >> tipo_de_comida){
        if(tipo_de_comida == "Pizza"){

            string sabor;
            int pedacos, borda_recheada;            

            cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade_produto;
            
            if(borda_recheada == 1)
                valor_unitario = valor_unitario * TAXA_BORDA_RECHEADA;
            
            prod = new Pizza(quantidade_produto, valor_unitario, pedacos, borda_recheada, sabor);
            pedidos.adiciona_produto(prod);
        }

        else if(tipo_de_comida == "Hamburguer"){
            string tipo;
            int artesanal;
            cin >> tipo >> artesanal >> valor_unitario >> quantidade_produto;
            if(artesanal == 1)
                valor_unitario = valor_unitario * TAXA_ARTESANAL;
            
            prod = new Hamburguer(quantidade_produto, valor_unitario, tipo, artesanal);
            pedidos.adiciona_produto(prod);
        }
    }
    
    pedidos.print_resumo();
    delete prod;
    return 0;
}
