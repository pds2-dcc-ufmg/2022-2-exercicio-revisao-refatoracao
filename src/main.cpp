#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

int main()
{
    string endereco;
    getline(cin, endereco);

    Pedido pedidos(endereco);

    string tipo;
    while (cin >> tipo)
    {
        if (tipo == "Pizza")
        {
            Produto *prod;
            string sabor;
            int quant, pedacos, borda_rech;
            float valor;

            cin >> sabor >> pedacos >> borda_rech >> valor >> quant;
            
            prod = new Pizza(quant, valor, pedacos, borda_rech, sabor); 
            pedidos.adiciona_produto(prod);
        }
        else if (tipo == "Hamburguer")
        {
            Produto *prod;
            string tipo;
            bool artes;
            float valor;
            int quant;
            
            cin >> tipo >> artes >> valor >> quant;

            prod = new Hamburguer(quant, valor, tipo, artes);
            pedidos.adiciona_produto(prod);
        }
    }

    pedidos.print_resumo();
    return 0;
}