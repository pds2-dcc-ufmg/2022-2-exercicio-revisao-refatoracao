#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#define ENCARECIMENTO_PIZZA 1.4
#define ENCARECIMENTO_HAMBURGUER 2.0

#include <iostream>

int main()
{
    std::string line;
    getline(std::cin, line);
    Pedido pedidos(line);

    Produto *prod;
    int quantidade;
    std::string tipo_comida;
    float valor_comida;
    while (std::cin >> tipo_comida)
    {
        if (tipo_comida == "Pizza")
        {
            std::string sabor;
            int num_pedac;
            bool borda_recheada;

            std::cin >> sabor >> num_pedac >> borda_recheada >> valor_comida >> quantidade;
            if (borda_recheada == true)
            {
                
                valor_comida = valor_comida * ENCARECIMENTO_PIZZA;
            }
            if (sabor == "Calabresa")
            {
                prod = new Pizza("Calabresa", quantidade, valor_comida, num_pedac, borda_recheada);

                pedidos.adiciona_produto(prod);
            }
            else if (sabor == "Marguerita")
            {
                prod = new Pizza("Marguerita", quantidade, valor_comida, num_pedac, borda_recheada);
                pedidos.adiciona_produto(prod);
            }
        }
        else if (tipo_comida == "Hamburguer")
        {

            std::string tipo_hamburguer;
            bool artesanal;
            std::cin >> tipo_hamburguer >> artesanal >> valor_comida >> quantidade;
            if (artesanal == true)
            {
                
                valor_comida = ENCARECIMENTO_HAMBURGUER * valor_comida;
            }
            prod = new Hamburguer(quantidade, valor_comida, tipo_hamburguer, artesanal);
            pedidos.adiciona_produto(prod);
        }
    }
    pedidos.print_resumo();
    return 0;
}
