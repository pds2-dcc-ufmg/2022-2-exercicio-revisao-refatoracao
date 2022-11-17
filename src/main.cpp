#include "pedido.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"

int main(){
    Produto* produto;
    string sabor, tipo, endereco;
    int quantidade, pedaco, borda_recheada, artesanal;            
    float valor;
    
    getline(cin, endereco);
    Pedido pedidos(endereco);

    while (cin >> tipo){
        if (tipo == "Pizza"){
            cin >> sabor >> pedaco >> borda_recheada >> valor >> quantidade;
           
            if (borda_recheada == 1){
                valor = (valor * 1.4);  //valor é aumentado 1.4 vezes caso possuia borda recheada
            }

            produto = new Pizza(quantidade, valor, pedaco, borda_recheada, sabor);
            pedidos.adiciona_produto(produto);
        }

        else if (tipo == "Hamburguer"){
            cin >> tipo >> artesanal >> valor >> quantidade;
            if (artesanal == 1){
                valor = (2.0 * valor);  //valor é aumentado 2 vezes caso o hamburguer seja artesanal
            }
            produto = new Hamburguer(quantidade, valor, tipo, artesanal);
            pedidos.adiciona_produto(produto);
        }
    }
    pedidos.print_resumo();  

    return 0;
}