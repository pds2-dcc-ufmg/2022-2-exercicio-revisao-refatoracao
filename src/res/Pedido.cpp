#include "Pedido.hpp"
#include "Produto.hpp"
#include "Hamburguer.hpp"
#include "Pizza.hpp"


Pedido::Pedido(string endereco) {
    this->_endereco = endereco;
}

/*passando por referência para diminuir overhead e não precisar fazer cópia*/
void Pedido::adiciona_produto(unique_ptr<Produto> &prod) { 
    this->_produtos.push_back(move(prod));
}

void Pedido::adiciona_pizza(int quantidade, int pedacos, bool borda_recheada, double valor_unitario, string sabor) {

    //Cria um smart pointer para uma nova pizza
    unique_ptr<Produto> nova_pizza (new Pizza(quantidade, valor_unitario, pedacos, borda_recheada, sabor));

    //Adiciona as tarifas necessárias com o método adicionar_tarifa de cada produto
    nova_pizza->adicionar_tarifas();   

    //Coloca o arquivo na lista de produtos do pedido
    this->adiciona_produto(nova_pizza);
}      

/*Mesmo procedimento do adiciona_pizza ocorre aqui*/
void Pedido::adiciona_hamburguer(int quantidade, double valor_unitario, string tipo_do_hamburguer, bool hamburguer_eh_artesanal) {

    unique_ptr<Produto> novo_hamburguer (new Hamburguer(quantidade, valor_unitario, tipo_do_hamburguer, hamburguer_eh_artesanal));
    
    novo_hamburguer->adicionar_tarifas();
    this->adiciona_produto(novo_hamburguer);
    
}

double Pedido::calcula_total() {
    double valor_total = 0.0;

    for (auto it = this->_produtos.begin(); it != this->_produtos.end(); ++it){
        valor_total += (*it)->get_valor_unitario() * (*it)->get_quantidade();
    }
    
    return valor_total;
}

void Pedido::print_resumo() {
    cout << "================================" << endl;
    cout << "Pedido - Endereco: " << this->_endereco << endl;
    cout << "Valor total: " << this->calcula_total() << endl;

    for (auto it = this->_produtos.begin(); it != this->_produtos.end(); ++it) {
        (*it)->print();
    }
    cout << "================================" << endl;
}