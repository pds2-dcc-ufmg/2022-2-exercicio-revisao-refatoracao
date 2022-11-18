#include <iostream>

#include "../include/Hamburguer.hpp"
#include "../include/Pedido.hpp"
#include "../include/Pizza.hpp"
#include "../include/Produto.hpp"

using namespace std;

int main() {
    const float MULTIPLICADOR_BORDA_RECHEADA = 1.4;
    const float MULTIPLICADOR_ARTESANAL = 2.0;

    string endereco;
    getline(cin, endereco);

    Pedido pedidos(endereco);

    string tipo;
    while (cin >> tipo) {
        if (tipo == "Pizza") {
            string sabor;
            int qtd, pedacos;
            bool is_borda_rech;
            float vlr_unitario;

            cin >> sabor >> pedacos >> is_borda_rech >> vlr_unitario >> qtd;

            if (is_borda_rech) {
                vlr_unitario *= MULTIPLICADOR_BORDA_RECHEADA;
            }
            pedidos.adicionaProduto(
                new Pizza(qtd, vlr_unitario, pedacos, is_borda_rech, sabor));
        } else if (tipo == "Hamburguer") {
            string tipo;
            int qtd;
            bool is_artesanal;
            float vlr_unitario;

            cin >> tipo >> is_artesanal >> vlr_unitario >> qtd;

            if (is_artesanal) {
                vlr_unitario *= MULTIPLICADOR_ARTESANAL;
            }
            pedidos.adicionaProduto(
                new Hamburguer(qtd, vlr_unitario, tipo, is_artesanal));
        }
    }

    pedidos.print_resumo();
    return 0;
}