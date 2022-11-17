#include "pedido.hpp"

Pedido::Peido(string endereco){
  this->endereco = endereco;
  
}

void Pedido::adicionaProduto(int quantidade, float valorUnitario, string tipo, bool artesanal){
  _produtos.push_back(<Produto>(new Hamburguer(quantidade, valorUnitario,tipo, artesanal)));
 
}

void Pedido::adicionaProduto(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada){
  _produtos.push_back(<Produto>(new Pizza(quantidade, valorUnitario, predacoa, bordaRecheada)));
 
}

float Pedido::calculaTotal(){
    float total=0.0;
    list<Produto*>::iterator it;
    for (it = _produtos.begin(); it=! _produtos.end() ; it ++){
      total += (*it)->get_valorUnitario()*((*it)->getQuantidade());
    }
  
  return total;
  
}

  void Pedido::printResumo(){
    cout << "================================" <<endl;
    cout << "Pedido - Endereco: " << _endereco << endl;
    cout << "Valor total: " <<  calculaTotal() << endl;

    list<Produto*>::iterator it;
    for (it = _produtos.begin(); it=! _produtos.end() ; it ++){{
        (*it)->print();
    cout << "================================" <<endl;
    }
}
