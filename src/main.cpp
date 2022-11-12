#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
//#include "pizza_calabresa.hpp"
//#include "pizza_marguerita.hpp"
#include <iostream>

int main()
{
    std::string line;
    getline(std::cin, line);
    Pedido pedidos(line);
    std::string tipo_comida;
    while (std::cin >> tipo_comida)
    {
        if (tipo_comida == "Pizza")
        {
            Produto *prod;
            std::string sabor;
            int quant, num_pedac;
            bool borda_recheada;
            float valor_pizza;
            std::cin >> sabor >> num_pedac >> borda_recheada >> valor_pizza >> quant;
            if (borda_recheada == true)
            {
                valor_pizza = valor_pizza * 1.4;
            }
            if (sabor == "Calabresa")
            {
                prod = new Pizza("Calabresa", quant, valor_pizza, num_pedac, borda_recheada);
                // prod = new Pizza_calabresa(q, v, p, b_r);
                pedidos.adiciona_produto(prod);
            }
            else if (sabor == "Marguerita")
            {
                prod = new Pizza("Marguerita", quant, valor_pizza, num_pedac, borda_recheada);
                pedidos.adiciona_produto(prod);
            }
        }
        else if (tipo_comida == "Hamburguer")
        {
            Produto *prod;
            int quantidade;
            float valor_hamburguer;
            std::string tipo_hamburguer;
            bool artesanal;
            std::cin >> tipo_hamburguer >> artesanal >> valor_hamburguer >> quantidade;
            if (artesanal == true)
            {
                valor_hamburguer = 2.0 * valor_hamburguer;
            }
            prod = new Hamburguer(quantidade, valor_hamburguer, tipo_hamburguer, artesanal);
            pedidos.adiciona_produto(prod);
        }
    }
    pedidos.print_resumo();
    return 0;
}
