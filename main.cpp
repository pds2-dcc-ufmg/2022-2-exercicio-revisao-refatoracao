#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <iostream>



int main()
{
    std::string line;
    getline(std::cin, line);
    Pedido pedidos(line);
    std::string tipo;
    while (std::cin >> tipo)
    {
        if (tipo == "Pizza")
        {
            Produto *prod;
            std::string sabor;
            int q, p, b_r;
            float v;
            std::cin >> sabor >> p >> b_r >> v >> q;
            if (b_r == 1)
            {
                v = v * 1.4;
            }
            if (sabor == "Calabresa")
            {
                prod = new Pizza_calabresa(q, v, p, b_r);
                pedidos.adiciona_produto(prod);
            }
            else if (sabor == "Marguerita")
            {
                prod = new Pizza_marguerita(q, v, p, b_r);
                pedidos.adiciona_produto(prod);
            }
        }
        else if (tipo == "Hamburguer")
        {
            Produto *prod;
            int q;
            float v;
            std::string tipo;
            int a;
            std::cin >> tipo >> a >> v >> q;
            if (a == 1)
            {
                v = 2.0 * v;
            }
            prod = new Hamburguer(q, v, tipo, a);
            pedidos.adiciona_produto(prod);
        }
    }
    pedidos.print_resumo();
    return 0;
}