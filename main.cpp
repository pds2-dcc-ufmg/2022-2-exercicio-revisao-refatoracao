#include "pedido.hpp"

int main(){
    string line;
    getline(cin, line);
    Pedido pedidos(line);
    string tipo;
    while(cin >> tipo){
        if(tipo == "Pizza"){
            string sabor;
            int pedacos, quantidade;
            float valor_unitario;
            bool borda_rech;
            float v;
            cin >> sabor >> pedacos >> borda_rech >> valor_unitario >> quantidade;
            pedidos.adiciona_produto(sabor, quantidade, valor_unitario, pedacos, borda_rech);
        }
        else if(tipo == "Hamburguer"){
            int quantidade;
            float valor_unitario;
            string tipo_burguer;
            int artesanal;
            cin >> tipo_burguer >> artesanal >> valor_unitario >> quantidade;
            pedidos.adiciona_produto(quantidade, valor_unitario, tipo_burguer, artesanal);
        }
    }
    pedidos.print_resumo();
    return 0;
}