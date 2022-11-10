#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <iostream>

using namespace std;

int main(){

    string endereco;

    getline(cin, endereco);
    Pedido pedidos(endereco);

    string tipo_produto;

    while(cin >> tipo_produto){

        if(tipo_produto == "Pizza"){

            Produto* prod;

            string sabor;
            int quantidade, pedacos, borda_rech;            
            float valor;

            cin >> sabor >> pedacos >> borda_rech >> valor >> quantidade;

            /** aumenta o valor da pizza em 40% caso tenha borda recheada */
            if(borda_rech == 1){
                valor = valor*1.4;
            }

            /** cria uma pizza calabresa ou marguerita */
            if (sabor == "Calabresa"){

                prod = new Pizza_calabresa(quantidade, valor, pedacos, borda_rech);
                pedidos.adiciona_produto(prod);

             }else if (sabor == "Marguerita"){

                prod = new Pizza_marguerita(quantidade, valor, pedacos, borda_rech);
                pedidos.adiciona_produto(prod);

            }
        }else if(tipo_produto == "Hamburguer"){

            Produto* prod;

            int quantidade;
            float valor;
            string tipo_hamb;
            int artesanal;

            cin >> tipo_hamb >> artesanal >> valor >> quantidade;

            /** aumenta o valor da hamburguer para o dobro caso seja artesanal */
            if(artesanal == 1){
                valor = valor*2.0;
            }

            /** cria um hamburguer */
            prod = new Hamburguer(quantidade, valor, tipo_hamb, artesanal);
            pedidos.adiciona_produto(prod);
        }
    }

    pedidos.print_resumo();
    return 0;
}