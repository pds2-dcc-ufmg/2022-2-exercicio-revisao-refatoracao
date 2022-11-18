#include "headers/pedido.hpp"
#include "headers/produto.hpp"
#include "headers/hamburguer.hpp"
#include "headers/pizza.hpp"
#include <iostream>

using namespace std;

int main()
{
    string endereco;
    getline(cin, endereco);
    Pedido pedidos(endereco);
    string tipo;
    
    while(cin >> tipo)
    {
        if(tipo == "Pizza")
        {
            Produto* prod;
            string sabor;
            int quantidade, pedacos, borda_recheada;            
            float valor_unitario;
            cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;

            if(borda_recheada == 1)
            {
                valor_unitario = valor_unitario * 1.4;
            }

            if(sabor == "Calabresa")
            {
                sabor = "Calabresa";
                prod = new Pizza(sabor, quantidade, valor_unitario, pedacos, borda_recheada);
                pedidos.adiciona_produto(prod);
            }

            else if (sabor == "Marguerita")
            {
                sabor = "Marguerita";
                prod = new Pizza(sabor, quantidade, valor_unitario, pedacos, borda_recheada);
                pedidos.adiciona_produto(prod);
            }
        }

        else if(tipo == "Hamburguer")
        {
            Produto* prod;
            int quantidade, artesanal;
            float valor_unitario;
            string tipo;
            cin >> tipo >> artesanal >> valor_unitario >> quantidade;
            
            if(artesanal == 1)
            {
                valor_unitario = 2.0 * valor_unitario;
            }
        
            prod = new Hamburguer(quantidade, valor_unitario, tipo, artesanal);
            pedidos.adiciona_produto(prod);
        }
    }
    
    pedidos.print_resumo();

    return 0;
}