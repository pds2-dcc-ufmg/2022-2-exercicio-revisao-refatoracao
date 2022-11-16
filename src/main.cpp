#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

int main(){

Produto* prod;
string end;
getline(cin, end); 
string tipo;
string sabor;
int quantidade,pedacos; 
bool borda_recheada, artesanal;            
float valor;

Pedido pedidos(end);

while(cin >> tipo){
    if(tipo == "Pizza"){
        cin >> sabor >> pedacos >> borda_recheada >> valor >> quantidade;
        
        if(borda_recheada == 1){
            valor = valor*1.4;
        }

    prod = new Pizza(quantidade, valor, pedacos, borda_recheada, sabor); 
    pedidos.adiciona_produto(prod); 
    
    
        
}
    else if(tipo == "Hamburguer"){
        
        cin >> tipo >> artesanal >> valor >> quantidade;
    
        if(artesanal == 1){
            valor = valor*2.0;
        }
    
    prod = new Hamburguer(quantidade, valor, tipo, artesanal); 
    pedidos.adiciona_produto(prod); 
}

}

    pedidos.print_resumo();

return 0;
}