#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

#define MULT_BORDA 1.4
#define MULT_ARTESANAL 2.0

int main(){
    string endereco, tipo;
    getline(cin, endereco);
    Pedido pedidos(endereco);
    int quant;
    float valor;
    while(cin >> tipo){
        if(tipo == "Pizza"){
            string sabor;
            int pedacos;        
            bool borda_recheada;    
            cin >> sabor >> pedacos >> borda_recheada >> valor >> quant;
            if(borda_recheada){
                valor *= MULT_BORDA; 
            }
            pedidos.adicionar_produto(quant, valor, pedacos, borda_recheada, sabor);
        } 

        else if(tipo == "Hamburguer"){
            bool artesanal;
            string tipo;
            cin >> tipo >> artesanal >> valor >> quant;
            if(artesanal){
                valor *= MULT_ARTESANAL; 
            }
            pedidos.adicionar_produto(quant, valor, tipo, artesanal);
        }  
    }
    pedidos.print_resumo();
    return 0;
}