#include "pedido.hpp"

Pedido::Pedido(std::string endereco) {
    this->_endereco = endereco;
}

// Instancia e adiciona um hamburguer a lista de produtos
void Pedido::adicionaProduto(int quantidade, float valorUnitario, std::string tipo, bool artesanal) {
    this->_produtos.push_back(std::unique_ptr<Produto>(new Hamburguer(quantidade, valorUnitario, tipo, artesanal)));
}

// Instancia e adiciona uma pizza a lista de produtos
void Pedido::adicionaProduto(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, std::string sabor) {
    this->_produtos.push_back(std::unique_ptr<Produto>(new Pizza(quantidade, valorUnitario, pedacos, bordaRecheada, sabor)));
}

float Pedido::calculaTotal() {
    float soma = 0;

    std::list<std::unique_ptr<Produto>>::iterator it;
    for (it = this->_produtos.begin(); it != this->_produtos.end(); it++) {
        soma += (*it)->getValorUnitario() * (*it)->getQuantidade();
    }
    return soma;
}

void Pedido::printResumo() {
    std::cout << "================================" << std::endl;
    std::cout << "Pedido - Endereco: " << this->_endereco << std::endl;
    std::cout << "Valor total: " << this->calculaTotal() << std::endl;
    
    std::list<std::unique_ptr<Produto>>::iterator it;
    for (it = this->_produtos.begin(); it != this->_produtos.end(); it++) {
        (*it)->print();
    }
    std::cout << "================================" << std::endl;

}
