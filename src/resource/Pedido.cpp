#include "Pedido.hpp"

Pedido::Pedido(std::string endereco): _endereco(endereco) { }

std::list<std::shared_ptr<Produto>>& Pedido::get_produtos() {
    return this->_produtos;
}

std::string Pedido::get_endereco() {
    return this->_endereco;
}

float Pedido::calcular_valor_total() {
    float valor_total = 0;
    
    for (std::shared_ptr<Produto> produto : get_produtos()) {
        valor_total += produto->get_valor_unitario() * produto->get_quantidade();
    }

    return valor_total;
}

void Pedido::adiciona_produto(int quantidade, float valor_unitario,
        std::string sabor,  int quantidade_pedaco, bool is_borda_rech) {

    std::shared_ptr<Pizza> pizza(new Pizza(quantidade, valor_unitario, sabor,
		quantidade_pedaco, is_borda_rech));

    get_produtos().push_back(pizza);
}

void Pedido::adiciona_produto(int quantidade, float valor_unitario,
        std::string tipo, bool is_artesanal) {

    std::shared_ptr<Hamburguer> hamburguer(new Hamburguer(quantidade,
        valor_unitario, tipo, is_artesanal));

    get_produtos().push_back(hamburguer);
}

void Pedido::print_resumo() {
    std::cout << "================================" << std::endl;
    std::cout << "Pedido - Endereco: " << get_endereco() << std::endl;
    std::cout << "Valor total: " << calcular_valor_total() << std::endl;

    for (std::shared_ptr<Produto> produto : get_produtos()){
        produto->print_info();
    }
    std::cout << "================================" << std::endl;
}