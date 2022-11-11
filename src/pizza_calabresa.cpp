#include "pizza_calabresa.hpp"

Pizza_calabresa::Pizza_calabresa(int quantidade, float valorUnitario, int pedacos, bool isBordaRecheada): Pizza(quantidade, valorUnitario, pedacos, isBordaRecheada){
    this->get_sabor();
}

string Pizza_calabresa::get_sabor(){
    return "Calabresa";
}