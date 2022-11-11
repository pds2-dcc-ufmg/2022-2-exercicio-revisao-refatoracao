#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <iostream>

using namespace std;

void fazer_pedido(Pedido pedido){
    Produto* produto;
    string sabor;
    int quantidade;
    float valorUnitario;

    string tipo;
    while(cin >> tipo){
        if(tipo == "Pizza"){
            int pedacos;
            bool isBordaRecheada;
            float taxaBordaRecheada = 1.4;

            cin >> sabor >> pedacos  >> isBordaRecheada >> valorUnitario >> quantidade;
            if(isBordaRecheada == true){
                valorUnitario = valorUnitario * taxaBordaRecheada;
            }
            if(sabor == "Calabresa"){
                produto = new Pizza_calabresa(quantidade,valorUnitario,pedacos, isBordaRecheada);
                pedido.adiciona_produto(produto);
            }
            else if(sabor == "Marguerita"){
                produto = new Pizza_marguerita(quantidade,valorUnitario,pedacos, isBordaRecheada);
                pedido.adiciona_produto(produto);
            }
        }

        else if(tipo == "Hamburguer"){
            string tipoHamburguer;
            bool isArtesanal;
            float taxaArtesanal = 2.0;

            cin >> tipoHamburguer >> isArtesanal >> valorUnitario >> quantidade;
            if(isArtesanal == true){
                valorUnitario = valorUnitario * taxaArtesanal;
            }

            produto = new Hamburguer(quantidade, valorUnitario, tipo, isArtesanal);
            pedido.adiciona_produto(produto);
        }
    }
    pedido.print_resumo();
}

int main(){
    string endereco;
    getline(cin, endereco);
    Pedido pedido1(endereco);

    fazer_pedido(pedido1);
    
    return 0;
}