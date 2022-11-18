#include "hamburguer.hpp"
#include "pedido.hpp"
#include "pizza.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include "produto.hpp"
#include <iostream>

using namespace std;

int main() {
	string line;

	getline(cin, line);
	Pedido pedidos(line);

	string tipo;
	while (cin >> tipo) {
		if (tipo == "Pizza") {
			Produto *produto;
			string sabor;
			int qtd, pedacos;
			bool borda_recheada;
			float valor_unitario;
			cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> qtd;
			if (borda_recheada == 1) {
				valor_unitario = valor_unitario * 1.4;
			}
			if (sabor == "Calabresa") {
				produto = new PizzaCalabresa(qtd, valor_unitario, pedacos, borda_recheada);
				pedidos.adiciona_produto(produto);
			} else if (sabor == "Marguerita") {
				produto = new PizzaMarguerita(qtd, valor_unitario, pedacos, borda_recheada);
				pedidos.adiciona_produto(produto);
			}
		} else if (tipo == "Hamburguer") {
			Produto *produto;
			int qtd;
			float valor_unitario;
			string tipo;
			int artesanal;
			cin >> tipo >> artesanal >> valor_unitario >> qtd;
			if (artesanal == 1) {
				valor_unitario = 2.0 * valor_unitario;
			}
			produto = new Hamburguer(qtd, valor_unitario, tipo, artesanal);
			pedidos.adiciona_produto(produto);
		}
	}
	pedidos.print_resumo();
	return 0;
}