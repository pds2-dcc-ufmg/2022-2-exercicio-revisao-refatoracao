#ifndef PEDIDO_H
#define PEDIDO_H

#include "Produto.hpp"

#include <list>
#include <string>
#include <iostream>
#include <memory>

using namespace std;


class Pedido {
    public:
        Pedido(string endereco);

        void adiciona_produto(const shared_ptr<Produto> &prod); /*Passando por referência para diminuir overhead e não precisar fazer cópia*/

        double calcula_total();

        void print_resumo();

    private:
        list<shared_ptr<Produto>> _produtos;    /*Adicionado lista de ponteiros compartilhados para ajudar na manipulação de memória*/
        string _endereco;     
};

#endif
