#include "pedido.hpp"



Pedido::Pedido(std::string endereco)
{
    _endereco = endereco;
}

void Pedido::adiciona_produto(Produto *p)
{
    _produtos.push_back(p);
}

float Pedido::calcula_total()
{
    float val = 0.0;
    std::list<Produto *>::iterator it;
    for (it = _produtos.begin(); it != _produtos.end(); it++)
    {
        val += (*it)->Produto::get_valorUnitario() * (*it)->Produto::get_q();
    }
    return val;
}

void Pedido::print_resumo()
{
    std::list<Produto *>::iterator it;
    std::cout << "================================" << std::endl;
    std::cout << "Pedido - Endereco: " << _endereco << std::endl;
    std::cout << "Valor total: " << calcula_total() << std::endl;
    for (it = _produtos.begin(); it != _produtos.end(); it++)
    {
        (*it)->print();
    }
    std::cout << "================================" << std::endl;
}
