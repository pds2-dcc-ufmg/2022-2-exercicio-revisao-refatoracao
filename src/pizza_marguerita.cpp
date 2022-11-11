#include "pizza_marguerita.hpp"

Pizza_marguerita::Pizza_marguerita(int quantidade, float valorUnitario, int pedacos, bool isBordaRecheada): Pizza(quantidade, valorUnitario, pedacos, isBordaRecheada){
    this->get_sabor();
}

string Pizza_marguerita::get_sabor(){
    return "Marguerita";
}