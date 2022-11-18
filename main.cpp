#include "pedido.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"

using namespace std;

int main(){
    string line;
    getline(cin, line);
    pedido pedidos(line);
    string tipo;
    while(cin >> tipo){
        if(tipo == "Pizza"){
            produto* _produto;
            string sabor;
            int quantidade,pedacos;
            bool borda_recheada;            
            float valor_unitario;

            cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;

            if(borda_recheada){
                valor_unitario = valor_unitario*1.4;
            }
            _produto = new pizza(quantidade,valor_unitario,pedacos,borda_recheada,sabor);
                pedidos.adiciona_produto(_produto);
        }
        else if(tipo == "Hamburguer"){
            produto* _produto;
            int quantidade;
            float valor_unitario;
            string tipo;
            bool artesanal;

            cin >> tipo >> artesanal >> valor_unitario >> quantidade;
            if(artesanal){
                valor_unitario = 2.0*valor_unitario;
            }
            _produto = new hamburguer(quantidade, valor_unitario, tipo, artesanal);
            pedidos.adiciona_produto(_produto);
        }
    }
    pedidos.print_resumo();
    return 0;
}