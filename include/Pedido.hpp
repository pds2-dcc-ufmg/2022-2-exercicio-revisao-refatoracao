#ifndef PEDIDO_H
#define PEDIDO_H

#include "Produto.hpp"
#include "Pizza.hpp"
#include "Hamburguer.hpp"

#include <list>
#include <string>
#include <memory>
#include <iostream>

class Pedido {
    private:
        std::string _endereco;
        std::list<std::shared_ptr<Produto>> _produtos;

        float calcular_valor_total();

    public:
        Pedido(std::string endereco);

        std::list<std::shared_ptr<Produto>>& get_produtos();

        std::string get_endereco();

        //cria uma intancia de pizza e adiciona a lista de produtos
        void adiciona_produto(int quantidade, float valor_unitario,
            std::string sabor, int pedacos, bool borda_rech);

        //cria uma intancia de hamburguer e adiciona a lista de produtos
        void adiciona_produto(int quantidade, float valor_unitario,
            std::string tipo, bool is_artesanal);

        void print_resumo();
};

#endif
