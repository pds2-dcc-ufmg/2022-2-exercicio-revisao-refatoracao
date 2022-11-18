#include "pizza_marguerita.hpp"

Pizza_marguerita::Pizza_marguerita(int quantidade, float valorUnitario, int pedacos,bool bordaRecheada):Pizza(quantidade, valorUnitario, pedacos, bordaRecheada);

 string Pizza_marguerita::get_sabor(){
    return "Marguerita" ;
}
