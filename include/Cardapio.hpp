#ifndef CARDAPIO_H
#define CARDAPIO_H

#include <string>

enum Opcoes {
    OPCAO_INVALIDA,
    PIZZA,
    HAMBURGUER
};

class Cardapio {
    public:
        static Opcoes encontrar(std::string opcao);
};

#endif
