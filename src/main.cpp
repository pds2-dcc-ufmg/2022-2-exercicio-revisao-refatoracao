#define TAXA_BORDA_RECH 1.4
#define TAXA_HAMBURGUER_ARTESANAL 2

#include "Pedido.hpp"
#include "Cardapio.hpp"

#include <iostream>

int main() {
	std::string endereco;
	getline(std::cin, endereco);

	Pedido pedidos(endereco);
	std::string opcao;
	
	int quant;
	float valor_unitario;
	
	while(std::cin >> opcao) {
		switch (Cardapio::encontrar(opcao)) {
			case PIZZA: {
				std::string sabor;
				int quant_pedaco;
				bool is_borda_rech;

				std::cin >> sabor;
				std::cin >> quant_pedaco;
				std::cin >> is_borda_rech;
				std::cin >> valor_unitario;
				std::cin >> quant;

				if (is_borda_rech) {
					valor_unitario *= TAXA_BORDA_RECH;
				}

				pedidos.adiciona_produto(quant, valor_unitario, sabor,
					quant_pedaco,is_borda_rech);

				break;
			}
			case HAMBURGUER: {
				bool is_artesanal;
				std::string tipo;

				std::cin >> tipo;
				std::cin >> is_artesanal;
				std::cin >> valor_unitario;
				std::cin >> quant;

				if (is_artesanal) {
					valor_unitario *= TAXA_HAMBURGUER_ARTESANAL;
				}
					
				pedidos.adiciona_produto(quant, valor_unitario,
					tipo, is_artesanal);

				break;
			}
			default: { }
		}
	}

	pedidos.print_resumo();

	return 0;
}