#include "pizza.hpp"

Pizza::Pizza(int quantidade, float valorUnitario, int pedacos, bool bordaRecheada, string sabor) : Produto( quantidade, valorUnitario){
    this->pedacos=pedacos;
    this->bordaRecheada=bordaRecheada;
    this->sabor=sabor;
  
void Pizza::print(){
  
  cout << "Pizza de " << get_sabor() << endl;
  cout << "\tQuantidade = " << get_quantidade() << endl;
  cout << "\tPedacos =" << pedacos << endl;
  cout << "\tValor Unitario = " << get_valorUnitario << endl;
  
  if(bordaRecheada){
   cout << "\tBorda Recheada " << endl;
  }
}
  
