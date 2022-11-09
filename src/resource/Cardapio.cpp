#include "Cardapio.hpp"

Opcoes Cardapio::encontrar(std::string opcao) {
    if (opcao == "Pizza") {
        return PIZZA;
    }

    if (opcao == "Hamburguer") {
        return HAMBURGUER;
    }

    return OPCAO_INVALIDA;
}
