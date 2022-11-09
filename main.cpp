#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <iostream>
#define Taxa_borda 1.4
#define Taxa_artesanal 2.0

using namespace std;

int main(){
string line,tipo;
int quantidade;
float valor_unitario;
Produto* prod;

getline(cin, line);
Pedido pedidos(line);

while(cin >> tipo){

    if(tipo == "Pizza"){
    int borda_rech,pedacos;
    string sabor;
    cin >> sabor >> pedacos >> borda_rech >> valor_unitario >> quantidade;

    if(borda_rech == 1)
    valor_unitario = valor_unitario*Taxa_borda;

    if (sabor == "Calabresa")
    prod = new Pizza_calabresa(quantidade,valor_unitario,pedacos,borda_rech);

    else if (sabor == "Marguerita")
    prod = new Pizza_marguerita(quantidade,valor_unitario,pedacos,borda_rech);

}
    else if(tipo == "Hamburguer"){
    int artesanal;
    cin >> tipo >> artesanal >> valor_unitario >> quantidade;
    if(artesanal == 1)
    valor_unitario = Taxa_artesanal*valor_unitario;
    prod = new Hamburguer(quantidade, valor_unitario, tipo, artesanal);
    }
pedidos.adiciona_produto(prod);
}
pedidos.print_resumo();

return 0;
}