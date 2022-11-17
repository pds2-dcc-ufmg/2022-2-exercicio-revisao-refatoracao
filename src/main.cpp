#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

int main(){
    string line;
    getline(cin, line);
    pedido pedidos(line);
    string tipo;
    while(cin >> tipo){
        if(tipo == "Pizza"){
            produto* prod;
            string sabor;
            int quantidade,pedaco,borda_rech;            
            float valor;
            cin >> sabor >> pedaco >> borda_rech >> valor >> quantidade;
            if(borda_rech == 1){
                valor = valor*1.4;
            }

            if (sabor == "Calabresa"){
            prod = new pizza (quantidade,valor,pedaco, "Calabresa", borda_rech);
            pedidos.adiciona_produto(prod);
            } else if (sabor == "Marguerita"){
                prod = new pizza (quantidade,valor,pedaco, "Marguerita", borda_rech);
                pedidos.adiciona_produto(prod);
            }
        } else if(tipo == "Hamburguer"){
            produto* prod;
            int quantidade;
            float valor;
            string tipo;
            bool artesanal;
            cin >> tipo >> artesanal >> valor >> quantidade;
            if(artesanal == 1){
                valor = 2.0*valor;
            }

            prod = new hamburguer(quantidade, valor, tipo, artesanal);
            pedidos.adiciona_produto(prod);
        }
}

pedidos.print_resumo();


return 0;

}