#include "pizza.hpp"

  Pizza::Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor): Produto(quantidade, valor_unitario), _pedacos(pedacos), _borda_recheada(borda_rech), _sabor(sabor) {}

  void Pizza::print_info() {

    cout << "Pizza de " << _sabor << endl;
    cout << "\tQuantidade: " << this->get_quantidade() << endl;
    cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
    cout << "\tPedacos: " << _pedacos << endl;

    if(_borda_recheada) 
    cout << "\tBorda Recheada" << endl;

  }
        
  int Pizza::get_pedacos() { return this->_pedacos; }
  bool Pizza::get_borda_recheada() { return this->_borda_recheada; }
  string Pizza::get_sabor() { return this->_sabor; }
