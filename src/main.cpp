#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>
#include <memory>

using namespace std;

/** aumenta o valor da pizza em 40% caso tenha borda recheada e aumenta o valor do hamburguer para o dobro caso seja artesanal */
float valor_ajustado(string tipo_produto, float valor, int condicao) {
    
    if(condicao == 0) return valor;

    if(tipo_produto == "Pizza") {
        valor = valor*1.4;
    }else if(tipo_produto == "Hamburguer") {
           valor = valor*2.0;
    }
    return valor;
}


int main() {

    string endereco;

    getline(cin, endereco);
    Pedido pedidos(endereco);

    string tipo_produto;

    while(cin >> tipo_produto) {

        if(tipo_produto == "Pizza") {

            string sabor;
            int quantidade, pedacos, borda_rech;            
            float valor;

            cin >> sabor >> pedacos >> borda_rech >> valor >> quantidade;

            /** cria uma pizza de calabresa ou de marguerita */
            shared_ptr<Produto> prod(new Pizza(quantidade, valor_ajustado(tipo_produto, valor, borda_rech), pedacos, borda_rech, sabor));
            pedidos.adiciona_produto(prod);

        }else if(tipo_produto == "Hamburguer") {

            int quantidade;
            float valor;
            string tipo_hamb;
            int artesanal;

            cin >> tipo_hamb >> artesanal >> valor >> quantidade;

            /** cria um hamburguer */
            shared_ptr<Produto> prod(new Hamburguer(quantidade,  valor_ajustado(tipo_produto, valor, artesanal), tipo_hamb, artesanal));
            pedidos.adiciona_produto(prod);
        }
    }

    pedidos.print_resumo();
    return 0;
}