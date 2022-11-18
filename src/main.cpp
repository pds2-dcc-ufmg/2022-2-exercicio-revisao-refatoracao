#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

int main(){
    string line;
    getline(cin, line);
    Pedido pedidos(line);
    string tipo;

    Produto* produto;
    string sabor;
    int quantidade, pedacos;
    float valor_unitario;
    bool borda_recheada, artesanal;

    while(cin >> tipo){
        if(tipo == "Pizza"){
            cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;
            
            if(borda_recheada == 1){
                valor_unitario = valor_unitario*1.4;
            }
            
            if (sabor == "Calabresa"){
                produto = new Pizza(quantidade, valor_unitario, pedacos, borda_recheada, sabor);
                pedidos.adiciona_produto(produto);
            } 
            else if (sabor == "Marguerita"){
                produto = new Pizza(quantidade, valor_unitario, pedacos, borda_recheada, sabor);
                pedidos.adiciona_produto(produto);
            }
        }
        else if(tipo == "Hamburguer"){
            cin >> tipo >> artesanal >> valor_unitario >> quantidade;
            
            if(artesanal == 1){
                valor_unitario = 2.0*valor_unitario;
            
            }
            
            produto = new Hamburguer(quantidade, valor_unitario, tipo, artesanal);
            pedidos.adiciona_produto(produto);
        }
    }
    
    pedidos.print_resumo();
    
    return 0;
}