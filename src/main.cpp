#include <iostream>

#include "Hamburguer.hpp"
#include "Pedido.hpp"
#include "Pizza.hpp"
#include "PizzaCalabresa.hpp"
#include "PizzaMarguerita.hpp"
#include "Produto.hpp"

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
            if (sabor == "Calabresa") {
                pedidos.adicionaProduto(
                    new PizzaCalabresa(qtd, vlr_unitario, pedacos, is_borda_rech));
            } else if (sabor == "Marguerita") {
                pedidos.adicionaProduto(
                    new PizzaMarguerita(qtd, vlr_unitario, pedacos, is_borda_rech));
            }
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