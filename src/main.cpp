#include "produto.hpp"
#include "pedido.hpp"
#include "pizza.hpp"
#include "hamburguer.hpp"
#include <iostream>
#include <memory>

using namespace std;

const float modificadorBorda = 1.4;
const float modificadorArtesanal = 2.0;

int main(){

    string line;
    getline(cin, line);
    Pedido pedidos(line);
    string tipo;

    while(cin >> tipo) {

        if(tipo == "Pizza"){
            string sabor;
            int quantidade, pedacos;
            bool bordaRecheada;            
            float valorUnitario;

            cin >> sabor >> pedacos >> bordaRecheada >> valorUnitario >> quantidade;

            if(bordaRecheada == 1){
                valorUnitario = valorUnitario*modificadorBorda;
            }
            shared_ptr<Produto> novo_produto(new Pizza(quantidade, valorUnitario, pedacos, bordaRecheada, sabor));
            pedidos.adiciona_produto(novo_produto);
        }

        if(tipo == "Hamburguer") {
            int quantidade;
            bool artesanal;
            float valorUnitario;
            string tipo;

            cin >> tipo >> artesanal >> valorUnitario >> quantidade;

            if(artesanal == 1){
                valorUnitario = valorUnitario*modificadorArtesanal;
            }

            shared_ptr<Produto> novo_produto(new Hamburguer(quantidade, valorUnitario, tipo, artesanal));
            pedidos.adiciona_produto(novo_produto);
        }
    }
    
    pedidos.print_resumo();

    return 0;
}