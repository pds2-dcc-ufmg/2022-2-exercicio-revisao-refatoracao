#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "hamburguer.hpp"
#include "pizza_calabresa.hpp"
#include "pizza_marguerita.hpp"
#include <vector>
#include <memory>

class Pedido{
    public:
        Pedido(std::string endereco);
        void adiciona_produto(int quantidade, float valor_unitario, string tipo_burger, bool artesanal);
        void adiciona_produto(string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_rech);
        float calcula_total();
        void print_resumo();

    private:
        std::string _endereco;
        vector<shared_ptr<Produto>> _produtos;
        float _soma_total = 0;
};

#endif
