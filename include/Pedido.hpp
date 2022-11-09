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

        /*Passando por referência para diminuir overhead e não precisar fazer cópia*/
        void adiciona_produto(unique_ptr<Produto> &prod);

        double calcula_total();

        void print_resumo();

    private:
        /*Adicionado lista de ponteiros únicos para ajudar na manipulação de memória*/
        list<unique_ptr<Produto>> _produtos;   
        string _endereco;     
};

#endif
