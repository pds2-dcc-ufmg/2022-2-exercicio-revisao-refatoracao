#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <iostream>

using namespace std;

int main(){
string line;
getline(cin, line);
Pedido pedidos(line);
string tipo;
while(cin >> tipo){
if(tipo == "Pizza"){
produto* prod;
string sabor;
int q,p,b_r;            
float v;
cin >> sabor >> p >> b_r >> v >> q;
if(b_r == 1){
v = v*1.4;
}
if (sabor == "Calabresa"){
prod = new pizza_calabresa(q,v,p,b_r);
pedidos.adiciona_produto(prod);
}
else if (sabor == "Marguerita"){
prod = new pizza_marguerita(q,v,p,b_r);
pedidos.adiciona_produto(prod);
}
}
else if(tipo == "Hamburguer"){
produto* prod;
int q;
float v;
string tipo;
int a;
cin >> tipo >> a >> v >> q;
if(a == 1){
v = 2.0*v;
}
prod = new hamburguer(q, v, tipo, a);
pedidos.adiciona_produto(prod);
}
}
pedidos.print_resumo();
return 0;
}