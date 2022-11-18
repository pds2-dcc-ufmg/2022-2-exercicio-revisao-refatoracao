#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"
#include <iostream>

using namespace std;

#define TAXA_EXTRA_BORDA 1.4
#define TAXA_EXTRA_ARTESANAL 2.0

int main(){
  string line, tipo;
  float valorUnitario;
  int quantidade;
  Pedidos pedidos(cin,line)
  getline(cin,line);
  
  while(cin >> tipo){
  
    if(tipo == "Pizza"){
      bool bordaRecheada;
      int pedacos;
      string sabor;
      
      cin >> sabor >> pedacos >> bordaRecheada >> valorUnitario>> quantidade;
      if(bordaRecheada -=1){
        total *= TAXA_EXTRA_BORDA;
        
       pedidos.adicionaProduto(quantidade, valorUnitario, pedacos, bordaRecheada, sabor);
      
      else if(tipo =="Hamburguer"){
        bool artesanal;
        
        cin >> tipo >> artesanal >> valorUnitario >> quantidade;
        if(artesanal == 1){
        valorUnitario *= TAXA_EXTRA_BORDA;
        
        pedidos.adicionaProdutos(quantidade, valorUnitario, tipo, artesanal);
        }
     }
     
     pedidos.printResumo();
     
     return 0;
     
  }
     
        
